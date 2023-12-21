#ifndef DIALOGBIO_H
#define DIALOGBIO_H

#include <QDialog>

namespace Ui {
class DialogBio;
}

class DialogBio : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBio(QWidget *parent = nullptr);
    ~DialogBio();

private:
    Ui::DialogBio *ui;
};

#endif // DIALOGBIO_H
