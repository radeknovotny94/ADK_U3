/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <draw.h>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout;
    Draw *Canvas;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *num_points;
    QLabel *label_2;
    QComboBox *type_of_layout;
    QPushButton *create_points;
    QSpacerItem *verticalSpacer_4;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QLabel *contours_label;
    QLineEdit *contours;
    QLabel *label_4;
    QLineEdit *main_contours;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1099, 742);
        horizontalLayout = new QHBoxLayout(Widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Canvas = new Draw(Widget);
        Canvas->setObjectName(QStringLiteral("Canvas"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(Canvas->sizePolicy().hasHeightForWidth());
        Canvas->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(Canvas);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        num_points = new QLineEdit(Widget);
        num_points->setObjectName(QStringLiteral("num_points"));

        verticalLayout->addWidget(num_points);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        type_of_layout = new QComboBox(Widget);
        type_of_layout->setObjectName(QStringLiteral("type_of_layout"));

        verticalLayout->addWidget(type_of_layout);

        create_points = new QPushButton(Widget);
        create_points->setObjectName(QStringLiteral("create_points"));

        verticalLayout->addWidget(create_points);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        contours_label = new QLabel(Widget);
        contours_label->setObjectName(QStringLiteral("contours_label"));

        verticalLayout->addWidget(contours_label);

        contours = new QLineEdit(Widget);
        contours->setObjectName(QStringLiteral("contours"));

        verticalLayout->addWidget(contours);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        main_contours = new QLineEdit(Widget);
        main_contours->setObjectName(QStringLiteral("main_contours"));

        verticalLayout->addWidget(main_contours);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "DTM", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "Number of Points", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "Type of layout:", Q_NULLPTR));
        type_of_layout->clear();
        type_of_layout->insertItems(0, QStringList()
         << QApplication::translate("Widget", "Random", Q_NULLPTR)
         << QApplication::translate("Widget", "Grid", Q_NULLPTR)
         << QApplication::translate("Widget", "Mound", Q_NULLPTR)
        );
        create_points->setText(QApplication::translate("Widget", "Create Points", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "Delaunay", Q_NULLPTR));
        contours_label->setText(QApplication::translate("Widget", "Step of contours:", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "Step of main contours:", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Widget", "Create contours", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Widget", "Slope", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "Aspect", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "Clear", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
