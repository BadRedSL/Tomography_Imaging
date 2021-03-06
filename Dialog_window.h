#include <QWidget>
#include"View.h"

#include <QCheckBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QSpinBox>
#include <QRadioButton>
#include <QGroupBox>

const int HEIGHT = 500;
const int WIDTH = 1100;


class Window : public QWidget
{
    Q_OBJECT

public:
    Window(QWidget* parent = nullptr, const char* input = "");

private:
    void createControls(const QString& title);

    const char* document;

     View* glWidget;

    QGroupBox* controlsGroup;

    QLabel* documentLabel;
    QLabel* documentName;

    QHBoxLayout* layout;

    QLabel* minimumLabel;
    QLabel* maximumLabel;
    QSpinBox* minimumSpinBox;
    QSpinBox* maximumSpinBox;

    QRadioButton* radio1;
    QRadioButton* radio2;
    QRadioButton* radio3;

    QLabel* modeCurrent;
    QLabel* modeLabel;

    QLabel* dimLabel1;
    QLabel* dimLabel2;
    QLabel* dimLabel3;
    QLabel* dimWidth;
    QLabel* dimHeight;
    QLabel* dimDepth;

    QLabel* layerLabel;
    QLabel* layerCurrent;
    QGridLayout* controlsLayout;

    QLabel* dimLabel4;

private slots:
    void handleButton();

protected slots:
    void keyPressEvent(QKeyEvent* event) override;
};


