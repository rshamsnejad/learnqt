#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget window;
	window.setFixedSize(200,100);
	
	QPushButton button;
	
	button.setText("Click me !!");
	button.setToolTip("Believe it, you can click me");
	button.setParent(&window);
	button.setGeometry(10, 10, 80, 30);
	window.show();

	return app.exec();
}
