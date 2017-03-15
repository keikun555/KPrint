#include "kprint.h"
#include <QApplication>
#include <stdexcept>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringList args = a.arguments();
    if (args.count() != 2)
    {
        throw runtime_error("main::filepath required");
    }
    kprint w;
    w.setFilePath(args[1].toStdString());
    w.show();

    return a.exec();
}
