/***************************************************************************
    kadasmapcanvasitem.cpp
    ----------------------
    copyright            : (C) 2019 by Sandro Mani
    email                : smani at sourcepole dot ch
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef KADASMAPCANVASITEM_H
#define KADASMAPCANVASITEM_H

#include <qgis/qgsmapcanvasitem.h>

#include <kadas/gui/kadas_gui.h>

class KadasMapItem;


class KADAS_GUI_EXPORT KadasMapCanvasItem : public QObject, public QgsMapCanvasItem
{
  Q_OBJECT

public:
  KadasMapCanvasItem(KadasMapItem* item, QgsMapCanvas* canvas);
  KadasMapItem* mapItem() const{ return mItem; }

  void paint( QPainter *painter ) override;

private:
  KadasMapItem* mItem = nullptr;

private slots:
  void updateRect();
};

#endif // KADASMAPCANVASITEM_H
