#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	
	QPushButton button;
	
	button.setText("Click me !!");
	button.setToolTip("Believe it, you can click me");
	QFont font ("Comic Sans", 47, QFont::Thin, true);
	button.setFont(font);
	
	QPushButton subButton;
	subButton.setText("Click me too !");
	subButton.setParent(&button);

	button.show();

	return app.exec();
}
