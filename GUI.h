#pragma once
#include <utility>

#include "service.h"
#include "QWidget"
#include "MODEL.h"
#include "QTableView"
#include "QSlider"
#include "Qt"
#include "QPushButton"
#include "QLineEdit"
#include "QLabel"
#include "QLayout"

using namespace std;

class GUI: public QWidget
{
private:
	Service& srv;
	MyTableModel* model;
	QTableView* table = new QTableView;

	QWidget* main_wnd = new QWidget;
	QWidget* left_comp = new QWidget;
	QWidget* right_comp = new QWidget;
	QWidget* comps = new QWidget;

	QPushButton* add_btn = new QPushButton;
	QPushButton* delete_btn = new QPushButton;
	QVBoxLayout* main_ly = new QVBoxLayout;
	QHBoxLayout* ly_comp = new QHBoxLayout;
	QVBoxLayout* ly_left = new QVBoxLayout;
	QVBoxLayout* ly_right = new QVBoxLayout;

	QLabel* lbl_titlu = new QLabel;
	QLabel* lbl_artist = new QLabel;
	QLabel* lbl_gen = new QLabel;

	QLineEdit* titlu_txt = new QLineEdit;
	QLineEdit* artist_txt = new QLineEdit;
	QLineEdit* gen_txt = new QLineEdit;

	void init_GUI();
	void connects_slots();
	void reload_list();
public:
	explicit GUI(Service& s) : srv{ s } {
		init_GUI();
		connects_slots();
		reload_list();
	};

	void run() {
		this->show();
	}

};

