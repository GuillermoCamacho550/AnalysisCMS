#if !defined(MYLIB_CONSTANTS_H)
#define MYLIB_CONSTANTS_H 1


//#include "CutsMonoH.h"
//#include "CutsTop.h"
//#include "CutsTTDM.h"
//#include "CutsWW.h"
#include "CutsWZ.h"


//const float lumi_fb = 1.269;
//const float lumi_fb = 1.324;  // Used in the ttdm synchronization
const float lumi_fb = 2.198;


const int ELECTRON_FLAVOUR = 11;
const int MUON_FLAVOUR     = 13;
const int TAU_FLAVOUR      = 15;
const int Z_FLAVOUR        = 23;

const float ELECTRON_MASS =  0.000511;  // [GeV]
const float MUON_MASS     =  0.106;     // [GeV]
const float TAU_MASS      =  1.777;     // [GeV]
const float Z_MASS        = 91.188;     // [GeV]


const double metvar_bins[] = {20, 25, 30, 45, 1000};  // [GeV]


const int njetbin = 3;  // 0jet, 1jet, 2+jet, all


const int nchannel = 9;

enum {
  ee,
  mm,
  em,
  ll,
  eee,
  eem,
  emm,
  mmm,
  lll
};

const TString schannel[nchannel] = {
  "ee",
  "mm",
  "em",
  "ll",
  "eee",
  "eem",
  "emm",
  "mmm",
  "lll"
};

const TString lchannel[nchannel] = {
  "ee",
  "#mu#mu",
  "e#mu",
  "all",
  "eee",
  "ee#mu",
  "e#mu#mu",
  "#mu#mu#mu",
  "all"
};


// https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation74X
// https://twiki.cern.ch/twiki/bin/view/CMS/BtagRecommendation76X
const float csvv2ivf_looseWP  = 0.605;  // 0.460 for 76X
const float csvv2ivf_mediumWP = 0.89;   // 0.800 for 76X
const float csvv2ivf_tightWP  = 0.97;   // 0.935 for 76X

// To be used in 76X
// -0.715 is the loose working point of the cMVAv2 algorithm
// A jet j is b-tagged if (std_vector_jet_cmvav2[j] > -0.715)


// MET filters
//------------------------------------------------------------------------------
enum {
  HBHENoiseFilter,
  HBHENoiseIsoFilter,
  CSCTightHalo2015Filter,
  EcalDeadCellTriggerPrimitiveFilter,
  goodVertices,
  eeBadScFilter,
  chargedHadronTrackResolutionFilter,
  muonBadTrackFilter,
  noFilter,
  allFilter,
  nfilter
};

const TString sfilter[nfilter] = {
  "HBHENoiseFilter",
  "HBHENoiseIsoFilter",
  "CSCTightHalo2015Filter",
  "EcalDeadCellTriggerPrimitiveFilter",
  "goodVertices",
  "eeBadScFilter",
  "chargedHadronTrackResolutionFilter",
  "muonBadTrackFilter",
  "noFilter",
  "allFilter"
};


#endif


// WZ CrossSection
//------------------------------------------------------------------------------

const Double_t W2e     = 0.1075;
const Double_t W2m     = 0.1057;
const Double_t W2tau   = 0.1125;
const Double_t Z2ll    = 0.033658;
//const Double_t WZ23lnu = 3 * Z2ll * (W2e + W2m + W2tau);
const Double_t WZ23lnu = 2 * Z2ll * (W2e + W2m);
