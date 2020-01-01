// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2017 The Californiacoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PIGEON_QT_PIGEONADDRESSVALIDATOR_H
#define PIGEON_QT_PIGEONADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class CaliforniacoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CaliforniacoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Californiacoin address widget validator, checks for a valid californiacoin address.
 */
class CaliforniacoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CaliforniacoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // PIGEON_QT_PIGEONADDRESSVALIDATOR_H
