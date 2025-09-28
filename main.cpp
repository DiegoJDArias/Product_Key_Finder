#include "producKeyFinder.h"

#include <QApplication>

/* /////////////////////////////////////////////////
   Author Diego J D Arias - diegojdarias@gmail.com.
*/////////////////////////////////////////////////


int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    w.setWindowOpacity(0.9);
    w.show();

    return a.exec();
}
