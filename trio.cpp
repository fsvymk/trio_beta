#include "trio.h"
#include "ui_trio.h"

trio::trio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::trio)
{
    ui->setupUi(this);
}

trio::~trio()
{
    delete ui;
}

void trio::calc()
{
    float ltc_btc,  btc_usd,  eth_btc,  eth_usd;
    float eth_ltc,  bch_eth,  bch_btc,  ltc_usd;

    //сокр.:
    /*  btc = b,    ltc = l,    eth = e,    bch = c,
     *  xmr = m,   xrp  = r,   dash = d,    doge= g,
     *  usd = u,   rub  = rr,  eur  = ee,   usdt = t,
     *
     *  b = buy,   s = sell,   vt = volume top,   va = volume average
    */

    //      I want to redo this piece of Chinese code.
    //       Let here is the associative array

    float lb, bLB,  sLB,    vLB,    vaLB;
    float bu, bBU,  sBU,    vBU,    vaBU;
    float eb, bEB,  sEB,    vEB,    vaEB;
    float eu, bEU,  sEU,    vEU,    vaEU;
    float el, bEL,  sEL,    vEL,    vaEL;
    float ce, bCE,  sCE,    vCE,    vaCE;
    float cb, bCB,  sCB,    vCB,    vaCB;
    float lu, bLU,  sLU,    vLU,    vaLU;



    ltc_btc = ui->lineLTC_BTC->text().toFloat();
    btc_usd = ui->lineBTC_USD->text().toFloat();
    bch_eth = ui->lineBCH_ETH->text().toFloat();
    eth_btc = ui->lineETH_BTC->text().toFloat();
    eth_usd = ui->lineETH_USD->text().toFloat();
    bch_btc = ui->lineBCH_BTC->text().toFloat();
    ltc_usd = ui->lineLTC_USD->text().toFloat();
    eth_ltc = ui->lineETH_LTC->text().toFloat();

    // BTC 1 = 10 ETH 1 = 0.5 BCH 1 = 0.19 BTC
    // Всё меряем в битках

    // дед  = 1
    // эфир = 0.1
    // кеша = 0.19



}


void trio::on_pushButton_clicked()
{
    calc();
}





