#include "melodii2.h"
#include <QtWidgets/QApplication>
#include "GUI.h"
#include"Service.h"
#include"Repo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Repo repo;
    Service service(repo);
    GUI gui(service);
    gui.run();
    return a.exec();
}
