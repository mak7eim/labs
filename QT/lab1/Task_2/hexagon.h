#ifndef HEXAGON_H
#define HEXAGON_H

#include "figure.h"

class Hexagon : public Figure {
   public:
    const float kRadius = 70;
    float area() override;
    float perimeter() override;

   protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem*,
               QWidget*) override;
};

#endif	// HEXAGON_H
