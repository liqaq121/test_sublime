#pragma once

#include <QWidget>

namespace Ui {
	class Form;
}

class Widget : public QWidget
{
	Q_OBJECT
public:
	Widget(QWidget* parent = nullptr);
	~Widget();

private:
	Ui::Form* ui;
};