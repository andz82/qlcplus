/*
  Q Light Controller Plus
  configureetherdream.h

  Copyright (c) Massimo Callegari

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0.txt

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

#ifndef CONFIGUREETHERDREAM_H
#define CONFIGUREETHERDREAM_H

#include "ui_configureetherdream.h"

class EtherdreamPlugin;

class ConfigureEtherdream : public QDialog, public Ui_ConfigureEtherdream
{
    Q_OBJECT

    /*********************************************************************
     * Initialization
     *********************************************************************/
public:
    ConfigureEtherdream(EtherdreamPlugin* plugin, QWidget* parent = 0);
    virtual ~ConfigureEtherdream();

    /** @reimp */
    void accept();

public slots:
    void slotOSCPathChanged(QString path);
    int exec();

private:
    void fillMappingTree();
    void showIPAlert(QString ip);

private:
    EtherdreamPlugin* m_plugin;

};

#endif
