#ifndef KPRINT_H
#define KPRINT_H

#include <QMainWindow>
#include <string>
#include <queue>
#include <QStringList>

using namespace std;

namespace Ui {
class kprint;
}

class kprint : public QMainWindow
{
    Q_OBJECT

public:
    explicit kprint(QWidget *parent = 0);
    void setFilePath(string path) {filePath = path;};
    ~kprint();

private:
    Ui::kprint *ui;
    string filePath;
    void getPrinterQStringList();
    QStringList printerQStringList;
private slots:
    void printToPrinter();
};

#endif // KPRINT_H
