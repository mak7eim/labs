#ifndef CIRCLE_H
#define CIRCLE_H

#include "figure.h"

class Circle : public Figure {
   public:
    const float kRadius = 110;
    float area() override;
    float perimeter() override;

   protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem*,
               QWidget*) override;
};
#endif	// CIRCLE_H
