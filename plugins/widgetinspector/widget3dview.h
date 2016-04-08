#ifndef WIDGET3DVIEW_H
#define WIDGET3DVIEW_H

#include <QWidget>

class QAbstractItemModel;
class QProgressBar;

namespace Qt3DCore {
namespace Quick {
class QQmlAspectEngine;
}
}

namespace GammaRay
{
class Widget3DWindow;
class Widget3DModel;

class Widget3DView : public QWidget
{
    Q_OBJECT
public:
    explicit Widget3DView(QWidget *parent = Q_NULLPTR);
    ~Widget3DView();

private Q_SLOTS:
    void rowCountChanged();
    void delayedInit();

private:
    QWidget *mProgressWidget;
    QProgressBar *mProgress;
    Widget3DWindow *mWindow;
    Qt3DCore::Quick::QQmlAspectEngine *mEngine;
    QAbstractItemModel *mModel;
};

}

#endif // WIDGET3DVIEW_H