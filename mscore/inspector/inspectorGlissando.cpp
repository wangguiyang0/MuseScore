//=============================================================================
//  MuseScore
//  Music Composition & Notation
//  $Id:$
//
//  Copyright (C) 2013 Werner Schweer
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2
//  as published by the Free Software Foundation and appearing in
//  the file LICENSE.GPL
//=============================================================================

#include "inspectorGlissando.h"
#include "musescore.h"
#include "libmscore/glissando.h"
#include "libmscore/score.h"
#include "icons.h"

namespace Ms {

//---------------------------------------------------------
//   InspectorGlissando
//---------------------------------------------------------

InspectorGlissando::InspectorGlissando(QWidget* parent)
   : InspectorElementBase(parent)
      {
      g.setupUi(addWidget());

      const std::vector<InspectorItem> iiList = {
            { P_ID::GLISS_TYPE,      0, g.type,           g.resetType           },
            { P_ID::GLISS_TEXT,      0, g.text,           g.resetText           },
            { P_ID::GLISS_SHOW_TEXT, 0, g.showText,       g.resetShowText       },
            { P_ID::GLISSANDO_STYLE, 0, g.glissandoStyle, g.resetGlissandoStyle },
            { P_ID::PLAY,            0, g.playGlissando,  g.resetPlayGlissando  },
            { P_ID::FONT_FACE,       0, g.fontFace,       g.resetFontFace       },
            { P_ID::FONT_SIZE,       0, g.fontSize,       g.resetFontSize       },
            { P_ID::FONT_BOLD,       0, g.fontBold,       g.resetFontBold       },
            { P_ID::FONT_ITALIC,     0, g.fontItalic,     g.resetFontItalic     },
            { P_ID::FONT_UNDERLINE,  0, g.fontUnderline,  g.resetFontUnderline  },
            };
      const std::vector<InspectorPanel> ppList = {
            { g.title, g.panel }
            };
      g.fontBold->setIcon(*icons[int(Icons::textBold_ICON)]);
      g.fontUnderline->setIcon(*icons[int(Icons::textUnderline_ICON)]);
      g.fontItalic->setIcon(*icons[int(Icons::textItalic_ICON)]);
      mapSignals(iiList, ppList);
      }
}

