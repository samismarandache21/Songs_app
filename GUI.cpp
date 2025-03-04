#include "GUI.h"

void GUI::init_GUI() {
	model = new MyTableModel(srv.All(), srv.artist_fr(), srv.genuri_fr());
	table->setSelectionMode(QAbstractItemView::SingleSelection);
	table->setModel(model);

	this->setLayout(main_ly);
	left_comp->setLayout(ly_left);
	right_comp->setLayout(ly_right);
	ly_comp->addWidget(left_comp);
	ly_comp->addWidget(right_comp);
	comps->setLayout(ly_comp);
	main_ly->addWidget(comps);

	delete_btn->setText("&Delete");
	add_btn->setText("&Add");
	lbl_titlu->setText("Tiltu");
	lbl_artist->setText("Artist");
	lbl_gen->setText("Gen");

	ly_left->addWidget(table);
	ly_right->addWidget(delete_btn);
	ly_right->addWidget(add_btn);
	ly_right->addWidget(lbl_titlu);
	ly_right->addWidget(titlu_txt);
	ly_right->addWidget(lbl_artist);
	ly_right->addWidget(artist_txt);
	ly_right->addWidget(lbl_gen);
	ly_right->addWidget(gen_txt);

}

void GUI::connects_slots(){
	QObject::connect(table->selectionModel(), &QItemSelectionModel::selectionChanged, [this] {
		if (table->selectionModel()->selectedIndexes().isEmpty()) {
			titlu_txt->setText("");
			return;
		}
		else {
			auto row = table->selectionModel()->selectedIndexes().at(0).row();
			auto titlu = table->model()->data(table->model()->index(row, 1), Qt::DisplayRole).toString();
			titlu_txt->setText(titlu);
		}
		});

	QObject::connect(add_btn, &QPushButton::clicked, [this] {
		auto titlu = titlu_txt->text().toStdString();
		auto artist = artist_txt->text().toStdString();
		auto gen = gen_txt->text().toStdString();
		srv.add(titlu, artist, gen);
		reload_list();

		});

	QObject::connect(delete_btn, &QPushButton::clicked, [this] {
		if (table->selectionModel()->selectedIndexes().isEmpty())
			return;
		auto row = table->selectionModel()->selectedIndexes().at(0).row();
		auto id = table->model()->data(table->model()->index(row, 0), Qt::DisplayRole).toInt();
		srv.remove(id);
		reload_list();

		});

}

void GUI::reload_list() {
	model->set_melodii(srv.All(), srv.artist_fr(), srv.genuri_fr());
}

