#ifndef STAR5_H
#define STAR5_H

#include "figure.h"

class Star5 : public Figure {
   public:
    float area() override;
    float perimeter() override;

   private:
    float radius1 = 80;
    float radius2 = 80;
    int count = 5;

   protected:
    void paint(QPainter* painter, const QStyleOptionGraphicsItem*,
               QWidget*) override;
};

#endif	// STAR5_H
