#ifndef PRODUCKEYFINDER_H
#define PRODUCKEYFINDER_H

/* /////////////////////////////////////////////////
   Author Diego J D Arias - diegojdarias@gmail.com.
*/////////////////////////////////////////////////

#include <QMainWindow>
#include <QMouseEvent>
#include <QPoint>
#include <QString>
#include <QVector>
#include <windows.h>
#include <VersionHelpers.h>

//#include "movermouse.h"

#ifndef VER_GREATER_EQUAL
#define VER_GREATER_EQUAL 3
#endif

#ifndef VERCOND
typedef DWORD VERCOND;
#endif

enum class DigitalProductIdVersion {
    UpToWindows7,
    Windows8AndUp
};

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
    DigitalProductIdVersion GetWindowsVersion();
    QVector<BYTE>           getDigitalProductId(int opcion);
    QString                 decodeProductKey(const QVector<BYTE>& digitalProductId);
    QString                 decodeProductKeyWin8AndUp(const QVector<BYTE>& digitalProductId);
    QString                 getWindowsProductKey(int opcion);
    void                    guardarComo();

protected:
    void                    mousePressEvent(QMouseEvent* event);
    void                    mouseMoveEvent(QMouseEvent* event);
    void                    mouseReleaseEvent(QMouseEvent* event);

private slots:
    void                    mostrarDatos();
    //void                    moverVentana(const QPoint& nuevaPosicion);

private:
    Ui::MainWindow*        ui;
   // MoverMouse*            m_mouseHandler;
    bool                   m_dragging = false;
    QPoint                 m_dragPosition;
    QString valorEncontradoName, valorEncontradoInstall, valorEncontradoBuild, valorEncontradoId,
            valorEncontradoId2, biosN, valorEncontradoId3, internetN, valorEncontradoExplorer, valorEncontradoExplorerB;
    QString windowKey, valorEncontradoBios, windowKeyDefault, windowKeyDefault2, explorerKey;

};
#endif // PRODUCKEYFINDER_H
