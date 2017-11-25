// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef AUSBIT_QT_AUSBITADDRESSVALIDATOR_H
#define AUSBIT_QT_AUSBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class AusbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AusbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Ausbit address widget validator, checks for a valid ausbit address.
 */
class AusbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit AusbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // AUSBIT_QT_AUSBITADDRESSVALIDATOR_H
