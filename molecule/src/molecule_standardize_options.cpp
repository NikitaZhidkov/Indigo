/****************************************************************************
 * Copyright (C) 2009-2013 GGA Software Services LLC
 * 
 * This file is part of Indigo toolkit.
 * 
 * This file may be distributed and/or modified under the terms of the
 * GNU General Public License version 3 as published by the Free Software
 * Foundation and appearing in the file LICENSE.GPL included in the
 * packaging of this file.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 ***************************************************************************/

#include "molecule/molecule_standardize_options.h"

using namespace indigo;

//
// StandardizeOptions
//
StandardizeOptions::StandardizeOptions ()
{
   reset();
}

void StandardizeOptions::reset ()
{
   standardize_stereo = false;
   standardize_charges = false;
   center_molecule = false;
   remove_single_atom_fragments = false;
}
