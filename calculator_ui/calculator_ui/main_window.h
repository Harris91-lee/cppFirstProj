#pragma once

#include <QMainWindow>
#include "ui_main_window.h"
#include <vector>

enum OPERATOR{PLUS,MINUS};

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

private:
	Ui::MainWindowClass ui;

	QString cur_text;
	std::vector<double> value;
	std::vector<OPERATOR> oper;

private slots:
	void on_pushButton_one_clicked();
	void on_pushButton_two_clicked();
	void on_pushButton_three_clicked();
	void on_pushButton_four_clicked();
	void on_pushButton_five_clicked();
	void on_pushButton_six_clicked();
	void on_pushButton_seven_clicked();
	void on_pushButton_eight_clicked();
	void on_pushButton_nine_clicked();
	void on_pushButton_zero_clicked();

	void on_pushButton_plus_clicked();
	void on_pushButton_equal_clicked();
	void on_pushButton_minus_clicked();
};
