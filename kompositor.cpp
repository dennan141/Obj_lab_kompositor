 #include "kompositor.h"
#include "ui_kompositor.h"

Kompositor::Kompositor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Kompositor)
{
    ui->setupUi(this);
}

Kompositor::~Kompositor()
{
    delete ui;
}


int Kompositor::pixelToHeight(int ypixel)
{
    float elevel = 413;
    float step = 8;
    int height = -1;
    for (int i = 0; i < 12; i++)
    {
        if (ypixel <= (elevel + (2 - i)*step + step / 2) && ypixel >
                (elevel + (2 - i)*step - step / 2))
            height = i;
    }
    return height;
}

// VVV Used to test that the ui works as intented below VVV

void Kompositor::on_play_button_clicked()
{
    ui->Stupid_test_for_self->setText("Du har klickat på spela");
    qDebug() << "play knappen klickad";

}

void Kompositor::on_half_Button_toggled(bool checked)
{
    ui->Stupid_test_for_self->setText("Du har valt half button");
}

void Kompositor::on_quarter_button_toggled(bool checked)
{
    ui->Stupid_test_for_self->setText("Du har valt kvarts knappen");
}

void Kompositor::on_eight_button_clicked()
{
    ui->Stupid_test_for_self->setText("Du har klickat på 8-dels knappen");
}

void Kompositor::on_quarter_rest_button_clicked()
{
    ui->Stupid_test_for_self->setText("Du har klickat på kvarts vila knappen");
}

void Kompositor::on_eight_rest_button_clicked()
{
    ui->Stupid_test_for_self->setText("Du har klickat på 8.dels vila knappen");
}













