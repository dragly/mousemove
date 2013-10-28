#ifndef MOUSEMOVER_H
#define MOUSEMOVER_H

#include <QQuickView>

class MouseMover : public QObject
{
    Q_OBJECT
public:
    explicit MouseMover(QQuickView *parent = 0);

signals:

public slots:
    void move(int x, int y);

private:
    QQuickView* m_view;
};

#endif // MOUSEMOVER_H
