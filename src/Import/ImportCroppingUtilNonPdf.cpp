/******************************************************************************************************
 * (C) 2016 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#include "ImportCroppingUtilNonPdf.h"

ImportCroppingUtilNonPdf::ImportCroppingUtilNonPdf()
{
}

bool ImportCroppingUtilNonPdf::applyImportCropping (bool isRegression,
                                                    ImportCropping importCropping) const
{
  bool cropping = false;

  if (!isRegression) {

    cropping = (importCropping == IMPORT_CROPPING_ALWAYS);
  }

  return cropping;
}
