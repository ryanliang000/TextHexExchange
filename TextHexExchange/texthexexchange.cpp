#include "texthexexchange.h"
#include "TextHexDecode.h"
#include "qsplitter.h"
TextHexExchange::TextHexExchange(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    //QSplitter* pSpliterMain = new QSplitter(Qt::Vertical, this);
    //pSpliterMain->addWidget()
    //ui.horizontalLayoutText->setParent(pSpliterMain);
    //ui.horizontalLayoutHex->setParent(pSpliterMain);
    //ui.verticalLayout->addWidget(pSpliterMain);
    

    // °ó¶¨ÏìÓ¦
    connect(ui.editTextContent, SIGNAL(textChanged()), this, SLOT(onTextContentChange()));
    connect(ui.editHexContent, SIGNAL(textChanged()), this, SLOT(onHexContentChange()));

}

TextHexExchange::~TextHexExchange()
{

}

void TextHexExchange::onTextContentChange()
{
    QString sInputText = ui.editTextContent->toPlainText();
    if (sInputText.isEmpty())
        return;

    CTextHexDecode decode;
    ui.editAnsiHex->setText(decode.textToAnsiHex(sInputText));
    ui.editUtf8Hex->setText(decode.textToUtf8Hex(sInputText));
    ui.editUnicodeHex->setText(decode.textToUnicodeHex(sInputText));
}

void TextHexExchange::onHexContentChange()
{
    QString sInputText = ui.editHexContent->toPlainText();
    if (sInputText.isEmpty())
        return;

    CTextHexDecode decode;
    ui.editAnsiText->setText(decode.ansiHexToText(sInputText));
    ui.editUtf8Text->setText(decode.utf8HexToText(sInputText));
    ui.editUnicodeText->setText(decode.unioceHexToText(sInputText));
}
