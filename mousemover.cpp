#include "mousemover.h"

#include <QCursor>

MouseMover::MouseMover(QQuickView *parent) :
    QObject(parent),
    m_view(parent)
{
}

void MouseMover::move(int x, int y)
{
    QPoint globalPoint = m_view->mapToGlobal(QPoint(x,y));
    QCursor::setPos(globalPoint);
}
