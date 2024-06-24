#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "ShapeFactory.h"

#include <QDialog>

namespace Ui {
class AbstractFactory;
}

class AbstractFactory : public QDialog
{
    Q_OBJECT

public:
    explicit AbstractFactory(QWidget *parent = nullptr);
    ~AbstractFactory();

private slots:
    void on_btnRoundedShape_clicked();

    void on_btnNormalShape_clicked();

private:
    Ui::AbstractFactory *ui;
    ShapeFactory *_shapeFactory;

    void drawShapes();
};

#endif // ABSTRACTFACTORY_H
