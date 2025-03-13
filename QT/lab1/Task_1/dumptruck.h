#ifndef DUMPTRUCK_H
#define DUMPTRUCK_H
#include "movingrectangle.h"

class DumpTruck : public Rectangle {
   public:
    void paintEvent(QPaintEvent*);
    void drawSam(QPainter* painter);
};
#endif
