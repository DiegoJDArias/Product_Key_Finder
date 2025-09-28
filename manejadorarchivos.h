#ifndef MANEJADORARCHIVOS_H
#define MANEJADORARCHIVOS_H

/* /////////////////////////////////////////////////
   Author Diego J D Arias - diegojdarias@gmail.com.
*/////////////////////////////////////////////////

#include <QObject>
#include <QString>
#include <QVector>

class ManejadorArchivos : public QObject {
    Q_OBJECT

public:
    explicit ManejadorArchivos(QObject* parent = nullptr);
    bool     guardarDatos(const QString& filename, const QVector<QVector<QString>>& lista1);

signals:
};

#endif // MANEJADORARCHIVOS_H
