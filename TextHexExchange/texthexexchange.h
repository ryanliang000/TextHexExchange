#ifndef TEXTHEXEXCHANGE_H
#define TEXTHEXEXCHANGE_H

#include <QtWidgets/QWidget>
#include "ui_texthexexchange.h"

class TextHexExchange : public QWidget
{
    Q_OBJECT

public:
    TextHexExchange(QWidget *parent = 0);
    ~TextHexExchange();

public slots:
    void onTextContentChange();
    void onHexContentChange();


private:
    Ui::TextHexExchangeClass ui;
};

#endif // TEXTHEXEXCHANGE_H
