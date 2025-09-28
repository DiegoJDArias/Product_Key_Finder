#ifndef MOVERMOUSE_H
#define MOVERMOUSE_H

#include <QObject>
#include <QPoint>
#include <QMouseEvent>


class MoverMouse : public QObject {
    Q_OBJECT

public:
    explicit MoverMouse(QObject *parent = nullptr);

private:
    bool            m_dragging = false;
    QPoint          m_dragPosition;

protected:
    void            mousePressEvent(QMouseEvent* event);
    void            mouseMoveEvent(QMouseEvent* event);
    void            mouseReleaseEvent(QMouseEvent* event);

signals:
    void            moverVentana(const QPoint& nuevaPosicion);
};

#endif // MOVERMOUSE_H
