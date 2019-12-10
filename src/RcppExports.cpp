//  Rkernel is an execution kernel for R interpreter
//  Copyright (C) 2019 JetBrains s.r.o.
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.


// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "RPIServiceImpl.h"
#include <Rcpp.h>

using namespace Rcpp;

// jetbrains_ther_device_record
SEXP jetbrains_ther_device_record();
RcppExport SEXP _rplugingraphics_jetbrains_ther_device_record() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(jetbrains_ther_device_record());
    return rcpp_result_gen;
END_RCPP
}
// jetbrains_ther_device_restart
SEXP jetbrains_ther_device_restart();
RcppExport SEXP _rplugingraphics_jetbrains_ther_device_restart() {
  BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(jetbrains_ther_device_restart());
    return rcpp_result_gen;
  END_RCPP
}
// jetbrains_ther_device_rescale
SEXP jetbrains_ther_device_rescale(int snapshotNumber, double width, double height, int resolution);
RcppExport SEXP _rplugingraphics_jetbrains_ther_device_rescale(SEXP snapshotNumberSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP resolutionSEXP) {
  BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type snapshotNumber(snapshotNumberSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(jetbrains_ther_device_rescale(snapshotNumber, width, height, resolution));
    return rcpp_result_gen;
  END_RCPP
}
// jetbrains_ther_device_rescale_stored
SEXP jetbrains_ther_device_rescale_stored(const std::string& parentDirectory, int snapshotNumber, int snapshotVersion, double width, double height, int resolution);
RcppExport SEXP _rplugingraphics_jetbrains_ther_device_rescale_stored(SEXP parentDirectorySEXP, SEXP snapshotNumberSEXP, SEXP snapshotVersionSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP resolutionSEXP) {
  BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type parentDirectory(parentDirectorySEXP);
    Rcpp::traits::input_parameter< int >::type snapshotNumber(snapshotNumberSEXP);
    Rcpp::traits::input_parameter< int >::type snapshotVersion(snapshotVersionSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(jetbrains_ther_device_rescale_stored(parentDirectory, snapshotNumber, snapshotVersion, width, height, resolution));
    return rcpp_result_gen;
  END_RCPP
}
// jetbrains_ther_device_init
SEXP jetbrains_ther_device_init(CharacterVector snapshotDir, double width, double height, int resolution, bool inMemory);
RcppExport SEXP _rplugingraphics_jetbrains_ther_device_init(SEXP snapshotDirSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP resolutionSEXP, SEXP inMemorySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type snapshotDir(snapshotDirSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type resolution(resolutionSEXP);
    Rcpp::traits::input_parameter< bool >::type inMemory(inMemorySEXP);
    rcpp_result_gen = Rcpp::wrap(jetbrains_ther_device_init(snapshotDir, width, height, resolution, inMemory));
    return rcpp_result_gen;
END_RCPP
}
// jetbrains_ther_device_shutdown
SEXP jetbrains_ther_device_shutdown();
RcppExport SEXP _rplugingraphics_jetbrains_ther_device_shutdown() {
  BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(jetbrains_ther_device_shutdown());
    return rcpp_result_gen;
  END_RCPP
}
// rs_base64encode
SEXP rs_base64encode(SEXP dataSEXP, SEXP binarySEXP);
RcppExport SEXP _rplugingraphics_rs_base64encode(SEXP dataSEXPSEXP, SEXP binarySEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataSEXP(dataSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type binarySEXP(binarySEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(rs_base64encode(dataSEXP, binarySEXP));
    return rcpp_result_gen;
END_RCPP
}
// rs_base64decode
SEXP rs_base64decode(SEXP dataSEXP, SEXP binarySEXP);
RcppExport SEXP _rplugingraphics_rs_base64decode(SEXP dataSEXPSEXP, SEXP binarySEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataSEXP(dataSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type binarySEXP(binarySEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(rs_base64decode(dataSEXP, binarySEXP));
    return rcpp_result_gen;
END_RCPP
}
// View
RcppExport SEXP _jetbrains_View(SEXP x, SEXP title) {
  BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type arg1(x);
    Rcpp::traits::input_parameter< SEXP >::type arg2(title);
    rpiService->viewHandler(arg1, arg2);
  END_RCPP
}
// Quit
RcppExport SEXP _jetbrains_quitRPIService() {
  BEGIN_RCPP
    quitRPIService();
  END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {".jetbrains_ther_device_record", (DL_FUNC) &_rplugingraphics_jetbrains_ther_device_record, 0},
    {".jetbrains_ther_device_restart", (DL_FUNC) &_rplugingraphics_jetbrains_ther_device_restart, 0},
    {"_rplugingraphics_rs_base64encode", (DL_FUNC) &_rplugingraphics_rs_base64encode, 2},
    {"_rplugingraphics_rs_base64decode", (DL_FUNC) &_rplugingraphics_rs_base64decode, 2},
    {".jetbrains_ther_device_init", (DL_FUNC) &_rplugingraphics_jetbrains_ther_device_init, 5},
    {".jetbrains_ther_device_rescale", (DL_FUNC) &_rplugingraphics_jetbrains_ther_device_rescale, 4},
    {".jetbrains_ther_device_rescale_stored", (DL_FUNC) &_rplugingraphics_jetbrains_ther_device_rescale_stored, 6},
    {".jetbrains_ther_device_shutdown", (DL_FUNC) &_rplugingraphics_jetbrains_ther_device_shutdown, 0},
    {".jetbrains_View", (DL_FUNC) &_jetbrains_View, 2},
    {".jetbrains_quitRPIService", (DL_FUNC) &_jetbrains_quitRPIService, 0},
    {NULL, NULL, 0}
};

RcppExport void RcppExports_Init(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
