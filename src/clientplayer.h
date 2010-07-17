#ifndef CLIENTPLAYER_H
#define CLIENTPLAYER_H

#include "player.h"

class ClientPlayer : public Player
{
    Q_OBJECT

public:
    explicit ClientPlayer(QObject *parent);
    void drawNCard(int card_num);

    virtual int getHandcardNum() const;
    virtual void removeCard(const Card *card, const QString &location);
    virtual void addCard(const Card *card, const QString &location);

private:
    int handcard_num;
    QList<const Card *> known_cards;
};

#endif // CLIENTPLAYER_H
