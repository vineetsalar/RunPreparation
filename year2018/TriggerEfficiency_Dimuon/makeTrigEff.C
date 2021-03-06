#define makeTrigEff_cxx
#define _USE_MATH_DEFINES
#include "makeTrigEff.h"

void oniaTree::AllEffCalc(){
 if (treeLabel.find("v33")!=std::string::npos){
    TrigEffCalc("HLT_HIL1DoubleMuOpen"); 
    TrigEffCalc("HLT_HIL1DoubleMuOpen_Centrality_30_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_Centrality_30_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_Centrality_40_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_Centrality_40_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_Centrality_50_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_MAXdR2p0");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_MAXdR2p0");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_MAXdR3p5");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_er1p6");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_er1p6");
    TrigEffCalc("HLT_HIL1DoubleMu0");
    TrigEffCalc("HLT_HIL1DoubleMu10");
    TrigEffCalc("HLT_HIL2_L1DoubleMu10");
    TrigEffCalc("HLT_HIL3_L1DoubleMu10");
    TrigEffCalc("HLT_HIL2DoubleMuOpen");
    TrigEffCalc("HLT_HIL3DoubleMuOpen");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_M60120");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_JpsiPsi");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_Upsi");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0_MAXdR2p0");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR2p0");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0_M1to5");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0_M7toinf");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_M1to5");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_M7toinf");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu0");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu0NHitQ15");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu2");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu2_M7toinf");
    TrigEffCalc("HLT_HIL3Mu3_L1TripleMuOpen");
  }
  else if (treeLabel.find("v35")!=std::string::npos){
    TrigEffCalc("HLT_HIL1DoubleMuOpen");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_Centrality_30_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_Centrality_30_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_Centrality_40_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_Centrality_40_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_Centrality_50_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_MAXdR2p0");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_MAXdR2p0");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_MAXdR3p5");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_er1p6");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_er1p6");
    TrigEffCalc("HLT_HIL1DoubleMu0");
    TrigEffCalc("HLT_HIL1DoubleMu10");
    TrigEffCalc("HLT_HIL2_L1DoubleMu10");
    TrigEffCalc("HLT_HIL3_L1DoubleMu10");
    TrigEffCalc("HLT_HIL2DoubleMuOpen");
    TrigEffCalc("HLT_HIL3DoubleMuOpen");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_M60120");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_JpsiPsi");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_Upsi");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0NHitQ15");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0_MAXdR2p0");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR2p0");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR2p0_M1to5");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR3p5_M1to5");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0_M1to5");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0_M7toinf");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_M1to5");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_M7toinf");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu0");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu0NHitQ15");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu2");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu2_M7toinf");
    TrigEffCalc("HLT_HIL3Mu3_L1TripleMuOpen");
  }
  else if (treeLabel.find("v36")!=std::string::npos){
    TrigEffCalc("HLT_HIL1DoubleMuOpen");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_OS_Centrality_40_100");
    TrigEffCalc("HLT_HIL1DoubleMuOpen_Centrality_50_100");
    TrigEffCalc("HLT_HIL1DoubleMu10");
    TrigEffCalc("HLT_HIL2_L1DoubleMu10");
    TrigEffCalc("HLT_HIL3_L1DoubleMu10");
    TrigEffCalc("HLT_HIL2DoubleMuOpen");
    TrigEffCalc("HLT_HIL3DoubleMuOpen");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_M60120");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_JpsiPsi");
    TrigEffCalc("HLT_HIL3DoubleMuOpen_Upsi");
    TrigEffCalc("HLT_HIL3Mu0_L2Mu0");
    TrigEffCalc("HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR3p5_M1to5");
    TrigEffCalc("HLT_HIL3Mu2p5NHitQ10_L2Mu2_M7toinf");
    TrigEffCalc("HLT_HIL3Mu3_L1TripleMuOpen");
  }
}

void oniaTree::TrigEffCalc (string trigLabel) {

 string trig_v33 [] =
   {
     "HLT_HIL1DoubleMuOpen", 
     "HLT_HIL1DoubleMuOpen_Centrality_30_100",
     "HLT_HIL1DoubleMuOpen_OS_Centrality_30_100",
     "HLT_HIL1DoubleMuOpen_Centrality_40_100",
     "HLT_HIL1DoubleMuOpen_OS_Centrality_40_100",
     "HLT_HIL1DoubleMuOpen_Centrality_50_100",
     "HLT_HIL1DoubleMuOpen_MAXdR2p0",
     "HLT_HIL1DoubleMuOpen_OS_MAXdR2p0",
     "HLT_HIL1DoubleMuOpen_MAXdR3p5",
     "HLT_HIL1DoubleMuOpen_OS",
     "HLT_HIL1DoubleMuOpen_er1p6",
     "HLT_HIL1DoubleMuOpen_OS_er1p6",
     "HLT_HIL1DoubleMu0",
     "HLT_HIL1DoubleMu10",
     "HLT_HIL2_L1DoubleMu10",
     "HLT_HIL3_L1DoubleMu10",
     "HLT_HIL2DoubleMuOpen",
     "HLT_HIL3DoubleMuOpen",
     "HLT_HIL3DoubleMuOpen_M60120",
     "HLT_HIL3DoubleMuOpen_JpsiPsi",
     "HLT_HIL3DoubleMuOpen_Upsi",
     "HLT_HIL3Mu0_L2Mu0",
     "HLT_HIL3Mu0_L2Mu0_MAXdR2p0",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR2p0",
     "HLT_HIL3Mu0_L2Mu0_M1to5",
     "HLT_HIL3Mu0_L2Mu0_M7toinf",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_M1to5",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_M7toinf",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu0",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu0NHitQ15",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu2",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu2_M7toinf",
     "HLT_HIL3Mu3_L1TripleMuOpen"
   };
 string trig_v35 [] =
   {
     "HLT_HIL1DoubleMuOpen",
     "HLT_HIL1DoubleMuOpen_Centrality_30_100",
     "HLT_HIL1DoubleMuOpen_OS_Centrality_30_100",
     "HLT_HIL1DoubleMuOpen_Centrality_40_100",
     "HLT_HIL1DoubleMuOpen_OS_Centrality_40_100",
     "HLT_HIL1DoubleMuOpen_Centrality_50_100",
     "HLT_HIL1DoubleMuOpen_MAXdR2p0",
     "HLT_HIL1DoubleMuOpen_OS_MAXdR2p0",
     "HLT_HIL1DoubleMuOpen_MAXdR3p5",
     "HLT_HIL1DoubleMuOpen_OS",
     "HLT_HIL1DoubleMuOpen_er1p6",
     "HLT_HIL1DoubleMuOpen_OS_er1p6",
     "HLT_HIL1DoubleMu0",
     "HLT_HIL1DoubleMu10",
     "HLT_HIL2_L1DoubleMu10",
     "HLT_HIL3_L1DoubleMu10",
     "HLT_HIL2DoubleMuOpen",
     "HLT_HIL3DoubleMuOpen",
     "HLT_HIL3DoubleMuOpen_M60120",
     "HLT_HIL3DoubleMuOpen_JpsiPsi",
     "HLT_HIL3DoubleMuOpen_Upsi",
     "HLT_HIL3Mu0_L2Mu0",
     "HLT_HIL3Mu0NHitQ10_L2Mu0NHitQ15",
     "HLT_HIL3Mu0_L2Mu0_MAXdR2p0",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR2p0",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR2p0_M1to5",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR3p5_M1to5",
     "HLT_HIL3Mu0_L2Mu0_M1to5",
     "HLT_HIL3Mu0_L2Mu0_M7toinf",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_M1to5",
     "HLT_HIL3Mu0NHitQ10_L2Mu0_M7toinf",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu0",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu0NHitQ15",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu2",
     "HLT_HIL3Mu2p5NHitQ10_L2Mu2_M7toinf",
     "HLT_HIL3Mu3_L1TripleMuOpen"
   };

string trig_v36 [] =
  {
    "HLT_HIL1DoubleMuOpen",
    "HLT_HIL1DoubleMuOpen_OS_Centrality_40_100",
    "HLT_HIL1DoubleMuOpen_Centrality_50_100",
    "HLT_HIL1DoubleMu10",
    "HLT_HIL2_L1DoubleMu10",
    "HLT_HIL3_L1DoubleMu10",
    "HLT_HIL2DoubleMuOpen",
    "HLT_HIL3DoubleMuOpen",
    "HLT_HIL3DoubleMuOpen_M60120",
    "HLT_HIL3DoubleMuOpen_JpsiPsi",
    "HLT_HIL3DoubleMuOpen_Upsi",
    "HLT_HIL3Mu0_L2Mu0",
    "HLT_HIL3Mu0NHitQ10_L2Mu0_MAXdR3p5_M1to5",
    "HLT_HIL3Mu2p5NHitQ10_L2Mu2_M7toinf",
    "HLT_HIL3Mu3_L1TripleMuOpen"
  };
 
 if (treeLabel.find("v33")!=std::string::npos) {
   int nTrig = sizeof(trig_v33)/sizeof(trig_v33[0]);
   for (int i=0; i<nTrig; i++)
     if (trigLabel.find(trig_v33[i])!=std::string::npos && trig_v33[i].find(trigLabel)!=std::string::npos) {
       triggerIndex_PP = i;
     }
 }
 else if (treeLabel.find("v35")!=std::string::npos) {
   int nTrig = sizeof(trig_v35)/sizeof(trig_v35[0]);
   for (int i=0; i<nTrig; i++)
     if (trigLabel.find(trig_v35[i])!=std::string::npos && trig_v35[i].find(trigLabel)!=std::string::npos) {
       triggerIndex_PP = i;
     }
 }

 else if (treeLabel.find("v36")!=std::string::npos) {
   int nTrig = sizeof(trig_v36)/sizeof(trig_v36[0]);
   for (int i=0; i<nTrig; i++)
     if (trigLabel.find(trig_v36[i])!=std::string::npos && trig_v36[i].find(trigLabel)!=std::string::npos) {
       triggerIndex_PP = i;
     }
 }

 cout<<"[INFO] Calculating efficiency for trigger "<<trigLabel<<" with index "<<triggerIndex_PP<< " from tree "<<treeLabel<<endl;
  //Double_t ptbins []={0, 0.5, 1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5, 9, 9.5, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24, 27, 30};
 Double_t ptbins []= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12.5, 15, 17.5, 20, 22.5, 25, 30, 35, 40, 50, 60, 70, 80, 100};
  //Double_t ybins []= {-2.4, -2.2, -2, -1.8, -1.6, -1.4, -1.2, -1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4};
  Double_t ybins []= {-2.4, -2, -1.6, -1.2, -0.8, -0.4, 0, 0.4, 0.8, 1.2, 1.6, 2, 2.4};

  int nptbins = sizeof(ptbins)/sizeof(double)-1;
  int nybins = sizeof(ybins)/sizeof(double)-1;

  TH1F* hdeno_pt = new TH1F ("hdeno_pt", "Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins); hdeno_pt->Sumw2();
  TH1F* hnum_pt = new TH1F ("hnum_pt", "Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins); hnum_pt->Sumw2();
  TH1F* hdeno_y = new TH1F ("hdeno_y","Trigger Efficiency vs y^{#mu#mu}; y^{#mu#mu}(GeV/c); Efficiency", nybins, ybins); hdeno_y->Sumw2();
  TH1F* hnum_y = new TH1F ("hnum_y","Trigger Efficiency vs y^{#mu#mu}; y^{#mu#mu}(GeV/c); Efficiency", nybins, ybins); hnum_y->Sumw2();

  TH1F* hdeno_pt_mid = new TH1F ("hdeno_pt_mid", "Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins); hdeno_pt_mid->Sumw2();
  TH1F* hnum_pt_mid = new TH1F ("hnum_pt_mid", "Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins); hnum_pt_mid->Sumw2();

  TH1F* hdeno_pt_fwd = new TH1F ("hdeno_pt_fwd", "Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins); hdeno_pt_fwd->Sumw2();
  TH1F* hnum_pt_fwd = new TH1F ("hnum_pt_fwd", "Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins); hnum_pt_fwd->Sumw2();

  Long64_t nentries =fChain->GetEntries();
  //nentries = 1000000;

  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++)
    {
      if (jentry%1000000==0) cout<<"[INFO] "<<jentry<<"/"<<nentries<<endl;
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;

      for (int iQQ=0; iQQ<Reco_QQ_size; iQQ++)
        {
          TLorentzVector *RecoQQ4mom = (TLorentzVector*) Reco_QQ_4mom->At(iQQ);

          jpsi_m=RecoQQ4mom->M();
          jpsi_pt = RecoQQ4mom->Pt();
          jpsi_rap = RecoQQ4mom->Rapidity();

	  if (abs(jpsi_rap)>2.4) continue;
	  if (treeLabel.find("Upsi")==std::string::npos && treeLabel.find("Z")==std::string::npos) //if it is not z or upsilon
	    if (jpsi_pt<3) continue;
          if (!areMuonsInAcceptance2015(iQQ)) continue;
	  if (!passQualityCuts2015(iQQ)) continue;
	  hdeno_pt->Fill(jpsi_pt);
	  if (treeLabel.find("Upsi")==std::string::npos && treeLabel.find("Z")==std::string::npos){ //if it is not z or upsilon  
	    if (jpsi_pt>6.5)
	      hdeno_y->Fill(jpsi_rap);
	  }
	  else 
	    hdeno_y->Fill(jpsi_rap);
	  if (abs(jpsi_rap)>1.6) hdeno_pt_fwd->Fill(jpsi_pt);
	  if (treeLabel.find("Upsi")==std::string::npos && treeLabel.find("Z")==std::string::npos){ //if it is not z or upsilon
	  if (abs(jpsi_rap)<=1.6 && jpsi_pt>6.5) hdeno_pt_mid->Fill(jpsi_pt);
	  }
	  else if (abs(jpsi_rap)<=1.6) hdeno_pt_mid->Fill(jpsi_pt);
	  //if (trigLabel.find("HIL3Mu")!=std::string::npos) {
	  if (!( (HLTriggers&((ULong64_t)pow(2, triggerIndex_PP))) == ((ULong64_t)pow(2, triggerIndex_PP)) )) continue; //}
	  //else if (!isTriggerMatch(iQQ, triggerIndex_PP)) continue;
          hnum_pt->Fill(jpsi_pt);
	  if (treeLabel.find("Upsi")==std::string::npos && treeLabel.find("Z")==std::string::npos){ //if it is not z or upsilon  
	    if (jpsi_pt>6.5)
	      hnum_y->Fill(jpsi_rap);
	  }
	  else 
	    hnum_y->Fill(jpsi_rap);
	  if (abs(jpsi_rap)>1.6) hnum_pt_fwd->Fill(jpsi_pt);
	  if (treeLabel.find("Upsi")==std::string::npos && treeLabel.find("Z")==std::string::npos){ //if it is not z or upsilon 
	    if (abs(jpsi_rap)<=1.6 && jpsi_pt>6.5) hnum_pt_mid->Fill(jpsi_pt);
	  }
	  else if (abs(jpsi_rap)<=1.6) hnum_pt_mid->Fill(jpsi_pt);

        }
    }
  TEfficiency* ptEff = new TEfficiency("ptEff","Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins);
  if(TEfficiency::CheckConsistency(*hnum_pt,*hdeno_pt))
    ptEff = new TEfficiency (*hnum_pt,*hdeno_pt);
  else
    cout<<"inconsistent histograms for trigger efficiency in fct of pt"<<endl;

  TEfficiency* yEff = new TEfficiency("yEff","Trigger Efficiency vs y^{#mu#mu}; y^{#mu#mu}(GeV/c); Efficiency", nybins, ybins);
  if(TEfficiency::CheckConsistency(*hnum_y,*hdeno_y))
    yEff = new TEfficiency (*hnum_y,*hdeno_y);
  else
    cout<<"inconsistent histograms for trigger efficiency in fct of y"<<endl;

  TEfficiency* ptEff_mid = new TEfficiency("ptEff_mid","Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins);
  if(TEfficiency::CheckConsistency(*hnum_pt_mid,*hdeno_pt_mid))
    ptEff_mid = new TEfficiency (*hnum_pt_mid,*hdeno_pt_mid);
  else
    cout<<"inconsistent histograms for trigger efficiency in fct of pt"<<endl;

  TEfficiency* ptEff_fwd = new TEfficiency("ptEff_fwd","Trigger Efficiency vs p_{t}^{#mu#mu}; p_{t}^{#mu#mu}(GeV/c); Efficiency", nptbins, ptbins);
  if(TEfficiency::CheckConsistency(*hnum_pt_fwd,*hdeno_pt_fwd))
    ptEff_fwd = new TEfficiency (*hnum_pt_fwd,*hdeno_pt_fwd);
  else
    cout<<"inconsistent histograms for trigger efficiency in fct of pt"<<endl;

  gSystem->mkdir("FilesTrigEff");
  TFile* fsave = new TFile (Form("FilesTrigEff/TrigEff_%s_%s.root", treeLabel.c_str(), trigLabel.c_str()), "RECREATE");
  ptEff->Write("TrigEffVsPt");
  ptEff_mid->Write("TrigEffVsPtMid");
  ptEff_fwd->Write("TrigEffVsPtFwd");
  yEff->Write("TrigEffVsY");
  fsave->Close();

  delete hdeno_pt; delete hnum_pt; delete hdeno_y; delete hnum_y; delete hdeno_pt_mid; delete hnum_pt_mid; delete hdeno_pt_fwd; delete hnum_pt_fwd;
}

void oniaTree::Plot(string inputName) {
  gStyle->SetOptStat(0);

  Double_t ptbins []= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12.5, 15};
  Double_t ptbins_high []= {15, 16, 17, 18, 19, 20, 22.5, 25, 30, 40};
  Double_t ptbins_Upsi []= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12.5, 15, 17.5, 20, 25, 30, 40, 50};
  Double_t ptbins_Z []= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12.5, 15, 16, 17, 18, 19, 20, 22.5, 25, 30, 40, 50, 60, 70, 80, 100};

  Double_t ybins []= {-2.4, -2, -1.6, -1.2, -0.8, -0.4, 0, 0.4, 0.8, 1.2, 1.6, 2, 2.4};
  int nptbins = sizeof(ptbins)/sizeof(double)-1;
  int nybins = sizeof(ybins)/sizeof(double)-1;

  TFile* fTrig = NULL;

  TEfficiency* ptEff = NULL;
  TEfficiency* ptEff_mid = NULL;
  TEfficiency* ptEff_fwd = NULL;
  TEfficiency* yEff = NULL;

  TCanvas* ptCan = new TCanvas ("ptCan","",1000,1000);
  TCanvas* ptCan_mid = new TCanvas ("ptCan_mid","",1000,1000);
  TCanvas* ptCan_fwd = new TCanvas ("ptCan_fwd","",1000,1000);
  TH1F* ptAxis = new TH1F("ptAxis","Trigger Efficiency Vs pt",nptbins, ptbins);
  if (inputName.find("High")!=std::string::npos){
    nptbins = sizeof(ptbins_high)/sizeof(double)-1;
    ptAxis = new TH1F("ptAxis","Trigger Efficiency Vs pt",nptbins, ptbins_high);
  }
  else if (inputName.find("Upsi")!=std::string::npos){
    nptbins = sizeof(ptbins_Upsi)/sizeof(double)-1;
    ptAxis = new TH1F("ptAxis","Trigger Efficiency Vs pt",nptbins, ptbins_Upsi);
  }
  else if (inputName.find("Z")!=std::string::npos){
    nptbins = sizeof(ptbins_Z)/sizeof(double)-1;
    ptAxis = new TH1F("ptAxis","Trigger Efficiency Vs pt",nptbins, ptbins_Z);
  }
  ptAxis->GetYaxis()->SetRangeUser(0, 1.2);
  ptAxis->GetYaxis()->SetTitle("Efficiency");
  ptAxis->GetXaxis()->SetTitle("p_{t}^{#mu#mu}(GeV/c)");
  ptAxis->GetXaxis()->SetNdivisions(505);
  ptAxis->GetXaxis()->CenterTitle(true);
  ptAxis->GetYaxis()->CenterTitle(true);

  TCanvas* yCan = new TCanvas ("yCan","",1000,1000);
  TH1F* yAxis = new TH1F("yAxis","Trigger Efficiency Vs rapidity",nybins, ybins);
  yAxis->GetYaxis()->SetRangeUser(0, 1.2);
  yAxis->GetYaxis()->SetTitle("Efficiency");
  yAxis->GetXaxis()->SetTitle("y^{#mu#mu}");
  yAxis->GetXaxis()->SetNdivisions(505);
  yAxis->GetXaxis()->CenterTitle(true);
  yAxis->GetYaxis()->CenterTitle(true);


  TLegend* ptleg = new TLegend(0.4,0.15,0.9,0.5);//(0.62,0.3,0.88,0.45);
  TLegend* yleg = new TLegend(0.4,0.15,0.9,0.5);

  ptCan->cd();
  ptAxis->Draw();
  ptCan_mid->cd();
  ptAxis->Draw();
  ptCan_fwd->cd();
  ptAxis->Draw();
  yCan->cd();
  yAxis->Draw();

  ifstream file(Form("InputPlotFiles/%s.txt",inputName.c_str()));
  if ((file.good())) cout<<"[INFO] Reading trigger names from input file"<< inputName<<endl;
  else {
    cout<<"[ERROR] Problem reading trigger names from input file"<< inputName<<endl;
    return;
  }
  string line;
  int colInd = 0;
  string plotLabel = "";

  while (file.good()) {
    getline(file,line);
    if (line.size()==0) break;
    colInd ++;
    plotLabel = plotLabel + "_" + line;
    if (colInd == 1) {
      treeLabel = line;
      continue;
    }
    fTrig = TFile::Open(Form("FilesTrigEff/TrigEff_%s_%s.root", treeLabel.c_str(), line.c_str()));
    ptEff = (TEfficiency*) fTrig->Get("TrigEffVsPt");
    ptEff_mid = (TEfficiency*) fTrig->Get("TrigEffVsPtMid");
    ptEff_fwd = (TEfficiency*) fTrig->Get("TrigEffVsPtFwd");
    yEff = (TEfficiency*) fTrig->Get("TrigEffVsY");
      
    ptCan->cd();
    ptEff->SetMarkerColor(color(colInd-2));
    ptEff->SetMarkerStyle(24+colInd);
    ptEff->SetMarkerSize(2);
    ptEff->SetLineColor(color(colInd-2));
    ptEff->SetLineWidth(2);
    ptleg->AddEntry(ptEff, Form("%s",line.c_str()), "lp");
    ptEff->Draw("same");

    ptCan_mid->cd();
    ptEff_mid->SetMarkerColor(color(colInd-2));
    ptEff_mid->SetMarkerStyle(24+colInd);
    ptEff_mid->SetMarkerSize(2);
    ptEff_mid->SetLineColor(color(colInd-2));
    ptEff_mid->SetLineWidth(2);
    //ptleg->AddEntry(ptEff, Form("%s",line.c_str()), "lp");
    ptEff_mid->Draw("same");

    ptCan_fwd->cd();
    ptEff_fwd->SetMarkerColor(color(colInd-2));
    ptEff_fwd->SetMarkerStyle(24+colInd);
    ptEff_fwd->SetMarkerSize(2);
    ptEff_fwd->SetLineColor(color(colInd-2));
    ptEff_fwd->SetLineWidth(2);
    //ptleg->AddEntry(ptEff, Form("%s",line.c_str()), "lp"); 
    ptEff_fwd->Draw("same");

    yCan->cd();
    yEff->SetMarkerColor(color(colInd-2));
    yEff->SetMarkerStyle(24+colInd);
    yEff->SetMarkerSize(2);
    yEff->SetLineColor(color(colInd-2));
    yEff->SetLineWidth(2);
    yleg->AddEntry(yEff, Form("%s",line.c_str()), "lp");
    yEff->Draw("same");

    fTrig->Close();
  }

  ptCan->cd();
  TLine * lpty1 = new TLine (ptbins[0],1,ptbins[nptbins],1);
  if (inputName.find("High")!=std::string::npos)
    lpty1 = new TLine (ptbins_high[0],1,ptbins_high[nptbins],1);
  else if (inputName.find("Upsi")!=std::string::npos)
    lpty1 = new TLine (ptbins_Upsi[0],1,ptbins_Upsi[nptbins],1);
  else if (inputName.find("Z")!=std::string::npos)
   lpty1 = new TLine (ptbins_Z[0],1,ptbins_Z[nptbins],1);

  lpty1->SetLineColor(kRed);
  lpty1->SetLineStyle(2);
  lpty1->SetLineWidth(2);
  ptleg->SetBorderSize(0);
  ptleg->SetFillStyle(0);
  ptleg->Draw("same");
  lpty1->Draw("same");

  ptCan_mid->cd();
  ptleg->Draw("same");
  lpty1->Draw("same");

  ptCan_fwd->cd();
  ptleg->Draw("same");
  lpty1->Draw("same");

  yCan->cd();
  TLine * lyy1 = new TLine (ybins[0],1,ybins[nybins],1);
  lyy1->SetLineColor(kRed);
  lyy1->SetLineStyle(2);
  lyy1->SetLineWidth(2);
  yleg->SetBorderSize(0);
  yleg->SetFillStyle(0);
  yleg->Draw("same");
  lyy1->Draw("same");

  gSystem->mkdir("PlotsTrigEff");
  gSystem->mkdir(Form("PlotsTrigEff/%s",treeLabel.c_str()));
  ptCan->SaveAs(Form("PlotsTrigEff/%s/trigEffVsPt_%s.pdf", treeLabel.c_str(), inputName.c_str()));
  ptAxis->SetTitle("Trigger Efficiency Vs pt |y|<1.6");
  ptCan_mid->SaveAs(Form("PlotsTrigEff/%s/trigEffVsPtMid_%s.pdf", treeLabel.c_str(), inputName.c_str()));
  ptAxis->SetTitle("Trigger Efficiency Vs pt 1.6<|y|<2.4");
  ptCan_fwd->SaveAs(Form("PlotsTrigEff/%s/trigEffVsPtFwd_%s.pdf", treeLabel.c_str(), inputName.c_str()));
  yCan->SaveAs(Form("PlotsTrigEff/%s/trigEffVsY_%s.pdf", treeLabel.c_str(), inputName.c_str()));
 
  delete ptAxis; delete yAxis;
}

void oniaTree::Plot_v18MuOpen0() {
  gStyle->SetOptStat(0);

  Double_t ptbins []= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12.5, 15};
  Double_t ybins []= {-2.4, -2, -1.6, -1.2, -0.8, -0.4, 0, 0.4, 0.8, 1.2, 1.6, 2, 2.4};
  int nptbins = sizeof(ptbins)/sizeof(double)-1;
  int nybins = sizeof(ybins)/sizeof(double)-1;

  TFile* fL1_Open = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v18_all_L1DoubleMuOpen.root");
  TFile* fL2_Open = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v18_all_L2DoubleMuOpen.root");
  TFile* fL3_Open = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v18_all_L3DoubleMuOpen.root");
  TFile* fL1_0 = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v18_all_L1DoubleMu0.root");

  TEfficiency* ptEffL1_Open = (TEfficiency*) fL1_Open->Get("TrigEffVsPt");
  TEfficiency* ptEffL2_Open = (TEfficiency*) fL2_Open->Get("TrigEffVsPt");
  TEfficiency* ptEffL3_Open = (TEfficiency*) fL3_Open->Get("TrigEffVsPt");
  TEfficiency* ptEffL1_0 = (TEfficiency*) fL1_0->Get("TrigEffVsPt");

  TEfficiency* yEffL1_Open = (TEfficiency*) fL1_Open->Get("TrigEffVsY");
  TEfficiency* yEffL2_Open = (TEfficiency*) fL2_Open->Get("TrigEffVsY");
  TEfficiency* yEffL3_Open = (TEfficiency*) fL3_Open->Get("TrigEffVsY");
  TEfficiency* yEffL1_0 = (TEfficiency*) fL1_0->Get("TrigEffVsY");

  ptEffL1_Open->SetMarkerColor(46);
  ptEffL1_Open->SetMarkerStyle(kOpenCircle);
  ptEffL1_Open->SetMarkerSize(2);
  ptEffL1_Open->SetLineColor(46);
  ptEffL1_Open->SetLineWidth(2);

  ptEffL2_Open->SetMarkerColor(30);
  ptEffL2_Open->SetMarkerStyle(kOpenStar);
  ptEffL2_Open->SetMarkerSize(2);
  ptEffL2_Open->SetLineColor(30);
  ptEffL2_Open->SetLineWidth(2);

  ptEffL3_Open->SetMarkerColor(39);
  ptEffL3_Open->SetMarkerStyle(kOpenDiamond);
  ptEffL3_Open->SetMarkerSize(2);
  ptEffL3_Open->SetLineColor(39);
  ptEffL3_Open->SetLineWidth(2);

  ptEffL1_0->SetMarkerColor(14);
  ptEffL1_0->SetMarkerStyle(kOpenSquare);
  ptEffL1_0->SetMarkerSize(2);
  ptEffL1_0->SetLineColor(14);
  ptEffL1_0->SetLineWidth(2);

  TCanvas* can = new TCanvas ("can","",1000,1000);
  TH1F* ptEffLX = new TH1F("ptEffLX","Trigger Efficiency for prompt J/psi 3<pt<15",nptbins, ptbins);
  ptEffLX->GetYaxis()->SetRangeUser(0, 1.2);
  ptEffLX->GetYaxis()->SetTitle("Efficiency");
  ptEffLX->GetXaxis()->SetTitle("p_{t}^{#mu#mu}(GeV/c)");
  ptEffLX->GetXaxis()->SetNdivisions(505);
  ptEffLX->GetXaxis()->CenterTitle(true);
  ptEffLX->GetYaxis()->CenterTitle(true);

  TLegend* leg = new TLegend(0.62,0.3,0.88,0.45);
  leg->AddEntry(ptEffL1_Open, "L1DoubleMuOpen", "lp");
  leg->AddEntry(ptEffL2_Open, "L2DoubleMuOpen", "lp");
  leg->AddEntry(ptEffL3_Open, "L3DoubleMuOpen", "lp");
  leg->AddEntry(ptEffL1_0, "L1DoubleMu0", "lp");
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);

  TLine * lpty1 = new TLine (ptbins[0],1,ptbins[nptbins],1);
  lpty1->SetLineColor(kRed);
  lpty1->SetLineStyle(2);
  lpty1->SetLineWidth(2);

  TLine * lptx3 = new TLine (3,0,3,1);
  lptx3->SetLineColor(kRed);
  lptx3->SetLineStyle(2);
  lptx3->SetLineWidth(2);


  ptEffLX->Draw();
  ptEffL1_Open->Draw("same");
  ptEffL2_Open->Draw("same");
  ptEffL3_Open->Draw("same");
  ptEffL1_0->Draw("same");
  leg->Draw("same");
  lpty1->Draw("same");
  lptx3->Draw("same");

  gSystem->mkdir("PlotsTrigEff");
  can->SaveAs("PlotsTrigEff/trigEffVsPt_promptJpsi015_v18MuOpen0.pdf");


  yEffL1_Open->SetMarkerColor(46);
  yEffL1_Open->SetMarkerStyle(kOpenCircle);
  yEffL1_Open->SetMarkerSize(2);
  yEffL1_Open->SetLineColor(46);
  yEffL1_Open->SetLineWidth(2);

  yEffL2_Open->SetMarkerColor(30);
  yEffL2_Open->SetMarkerStyle(kOpenStar);
  yEffL2_Open->SetMarkerSize(2);
  yEffL2_Open->SetLineColor(30);
  yEffL2_Open->SetLineWidth(2);

  yEffL3_Open->SetMarkerColor(39);
  yEffL3_Open->SetMarkerStyle(kOpenDiamond);
  yEffL3_Open->SetMarkerSize(2);
  yEffL3_Open->SetLineColor(39);
  yEffL3_Open->SetLineWidth(2);

  yEffL1_0->SetMarkerColor(14);
  yEffL1_0->SetMarkerStyle(kOpenSquare);
  yEffL1_0->SetMarkerSize(2);
  yEffL1_0->SetLineColor(14);
  yEffL1_0->SetLineWidth(2);

  TH1F* yEffLX = new TH1F("yEffLX","Trigger Efficiency for prompt J/psi 6.5<pt<15",nybins, ybins);
  yEffLX->GetYaxis()->SetRangeUser(0, 1.2);
  yEffLX->GetYaxis()->SetTitle("Efficiency");
  yEffLX->GetXaxis()->SetTitle("y^{#mu#mu}(GeV/c)");
  yEffLX->GetXaxis()->SetNdivisions(505);
  yEffLX->GetXaxis()->CenterTitle(true);
  yEffLX->GetYaxis()->CenterTitle(true);

  leg = new TLegend(0.62,0.22,0.88,0.35);
  leg->AddEntry(yEffL1_Open, "L1DoubleMuOpen", "lp");
  leg->AddEntry(yEffL2_Open, "L2DoubleMuOpen", "lp");
  leg->AddEntry(yEffL3_Open, "L3DoubleMuOpen", "lp");
  leg->AddEntry(yEffL1_0, "L1DoubleMu0", "lp");
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);

  TLine * lyy1 = new TLine (ybins[0],1,ybins[nybins],1);
  lyy1->SetLineColor(kRed);
  lyy1->SetLineStyle(2);
  lyy1->SetLineWidth(2);

  yEffLX->Draw();
  yEffL1_Open->Draw("same");
  yEffL2_Open->Draw("same");
  yEffL3_Open->Draw("same");
  yEffL1_0->Draw("same");
  leg->Draw("same");
  lyy1->Draw("same");
  can->SaveAs("PlotsTrigEff/trigEffVsY_promptJpsi015_v18MuOpen0.pdf");
}


void oniaTree::Plot_v1417MuOpen_withOptions() {
  gStyle->SetOptStat(0);

  Double_t ptbins []= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12.5, 15};
  Double_t ybins []= {-2.4, -2, -1.6, -1.2, -0.8, -0.4, 0, 0.4, 0.8, 1.2, 1.6, 2, 2.4};
  int nptbins = sizeof(ptbins)/sizeof(double)-1;
  int nybins = sizeof(ybins)/sizeof(double)-1;

  TFile* fv14_Open = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v14_specialHLT_L3DoubleMuOpen.root");
  TFile* fv14_OpenMaxdR = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v14_specialHLT_L3DoubleMuOpen_MAXdR.root");
  TFile* fv14_OpenMatchdR = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v14_specialHLT_L3DoubleMuOpen_MatchdR.root");
  TFile* fv15_Open = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v15_specialHLT_L3DoubleMuOpen.root");
  TFile* fv16_Open = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v16_specialHLT_L3DoubleMuOpen.root");
  TFile* fv17_Open = TFile::Open("FilesTrigEff/TrigEff_TreeFromJB_sept7_v17_specialHLT_L3DoubleMuOpen.root");

  TEfficiency* ptEffv14 = (TEfficiency*) fv14_Open->Get("TrigEffVsPt");
  TEfficiency* ptEffv14_MaxdR = (TEfficiency*) fv14_OpenMaxdR->Get("TrigEffVsPt");
  TEfficiency* ptEffv14_MatchdR = (TEfficiency*) fv14_OpenMatchdR->Get("TrigEffVsPt");
  TEfficiency* ptEffv15 = (TEfficiency*) fv15_Open->Get("TrigEffVsPt");
  TEfficiency* ptEffv16 = (TEfficiency*) fv16_Open->Get("TrigEffVsPt");
  TEfficiency* ptEffv17 = (TEfficiency*) fv17_Open->Get("TrigEffVsPt");

  TEfficiency* yEffv14 = (TEfficiency*) fv14_Open->Get("TrigEffVsY");
  TEfficiency* yEffv14_MaxdR = (TEfficiency*) fv14_OpenMaxdR->Get("TrigEffVsY");
  TEfficiency* yEffv14_MatchdR = (TEfficiency*) fv14_OpenMatchdR->Get("TrigEffVsY");
  TEfficiency* yEffv15 = (TEfficiency*) fv15_Open->Get("TrigEffVsY");
  TEfficiency* yEffv16 = (TEfficiency*) fv16_Open->Get("TrigEffVsY");
  TEfficiency* yEffv17 = (TEfficiency*) fv17_Open->Get("TrigEffVsY");


  ptEffv14->SetMarkerColor(1);
  ptEffv14->SetMarkerStyle(kOpenSquare);
  ptEffv14->SetMarkerSize(2);
  ptEffv14->SetLineColor(1);
  ptEffv14->SetLineWidth(2);

  ptEffv15->SetMarkerColor(2);
  ptEffv15->SetMarkerStyle(kOpenDiamond);
  ptEffv15->SetMarkerSize(2);
  ptEffv15->SetLineColor(2);
  ptEffv15->SetLineWidth(2);

  ptEffv16->SetMarkerColor(3);
  ptEffv16->SetMarkerStyle(kOpenCircle);
  ptEffv16->SetMarkerSize(2);
  ptEffv16->SetLineColor(3);
  ptEffv16->SetLineWidth(2);

  ptEffv17->SetMarkerColor(4);
  ptEffv17->SetMarkerStyle(kOpenStar);
  ptEffv17->SetMarkerSize(2);
  ptEffv17->SetLineColor(4);
  ptEffv17->SetLineWidth(2);

  ptEffv14_MaxdR->SetMarkerColor(7);
  ptEffv14_MaxdR->SetMarkerStyle(kOpenCross);
  ptEffv14_MaxdR->SetMarkerSize(2);
  ptEffv14_MaxdR->SetLineColor(7);
  ptEffv14_MaxdR->SetLineWidth(2);

  ptEffv14_MatchdR->SetMarkerColor(6);
  ptEffv14_MatchdR->SetMarkerStyle(kOpenTriangleUp);
  ptEffv14_MatchdR->SetMarkerSize(2);
  ptEffv14_MatchdR->SetLineColor(6);
  ptEffv14_MatchdR->SetLineWidth(2);


  TCanvas* can = new TCanvas ("can","",1000,1000);
  TH1F* ptEffLX = new TH1F("ptEffLX","Trigger Efficiency for prompt J/psi 3<pt<15",nptbins, ptbins);
  ptEffLX->GetYaxis()->SetRangeUser(0, 1.2);
  ptEffLX->GetYaxis()->SetTitle("Efficiency");
  ptEffLX->GetXaxis()->SetTitle("p_{t}^{#mu#mu}(GeV/c)");
  ptEffLX->GetXaxis()->SetNdivisions(505);
  ptEffLX->GetXaxis()->CenterTitle(true);
  ptEffLX->GetYaxis()->CenterTitle(true);


  TLegend* leg = new TLegend(0.62,0.3,0.88,0.45);
  leg->AddEntry(ptEffv14, "L3DoubleMuOpen (default)", "lp");
  leg->AddEntry(ptEffv14_MaxdR, "L3DoubleMuOpen, max dR =4", "lp");
  leg->AddEntry(ptEffv14_MatchdR, "L3DoubleMuOpen, matched L1 dR = 1", "lp");
  leg->AddEntry(ptEffv15, "L3DoubleMuOpen, min pt = 0.8", "lp");
  leg->AddEntry(ptEffv16, "L3DoubleMuOpen, L1 quality = 4", "lp");
  leg->AddEntry(ptEffv17, "L3DoubleMuOpen, remove ID", "lp");
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);

  TLine * lpty1 = new TLine (ptbins[0],1,ptbins[nptbins],1);
  lpty1->SetLineColor(kRed);
  lpty1->SetLineStyle(2);
  lpty1->SetLineWidth(2);

  TLine * lptx3 = new TLine (3,0,3,1);
  lptx3->SetLineColor(kRed);
  lptx3->SetLineStyle(2);
  lptx3->SetLineWidth(2);


  ptEffLX->Draw();
  ptEffv14->Draw("same");
  ptEffv14_MaxdR->Draw("same");
  ptEffv14_MatchdR->Draw("same");
  ptEffv15->Draw("same");
  ptEffv16->Draw("same");
  ptEffv17->Draw("same");
  leg->Draw("same");
  lpty1->Draw("same");
  lptx3->Draw("same");

  gSystem->mkdir("PlotsTrigEff");
  can->SaveAs("PlotsTrigEff/trigEffVsPt_promptJpsi015_v1417DoubleMuOpen_withOptions.pdf");


  yEffv14->SetMarkerColor(1);
  yEffv14->SetMarkerStyle(kOpenSquare);
  yEffv14->SetMarkerSize(2);
  yEffv14->SetLineColor(1);
  yEffv14->SetLineWidth(2);

  yEffv15->SetMarkerColor(2);
  yEffv15->SetMarkerStyle(kOpenDiamond);
  yEffv15->SetMarkerSize(2);
  yEffv15->SetLineColor(2);
  yEffv15->SetLineWidth(2);

  yEffv16->SetMarkerColor(3);
  yEffv16->SetMarkerStyle(kOpenCircle);
  yEffv16->SetMarkerSize(2);
  yEffv16->SetLineColor(3);
  yEffv16->SetLineWidth(2);

  yEffv17->SetMarkerColor(4);
  yEffv17->SetMarkerStyle(kOpenStar);
  yEffv17->SetMarkerSize(2);
  yEffv17->SetLineColor(4);
  yEffv17->SetLineWidth(2);

  yEffv14_MaxdR->SetMarkerColor(7);
  yEffv14_MaxdR->SetMarkerStyle(kOpenCross);
  yEffv14_MaxdR->SetMarkerSize(2);
  yEffv14_MaxdR->SetLineColor(7);
  yEffv14_MaxdR->SetLineWidth(2);

  yEffv14_MatchdR->SetMarkerColor(6);
  yEffv14_MatchdR->SetMarkerStyle(kOpenTriangleUp);
  yEffv14_MatchdR->SetMarkerSize(2);
  yEffv14_MatchdR->SetLineColor(6);
  yEffv14_MatchdR->SetLineWidth(2);


  TH1F* yEffLX = new TH1F("yEffLX","Trigger Efficiency for prompt J/psi 6.5<pt<15",nybins, ybins);
  yEffLX->GetYaxis()->SetRangeUser(0, 1.2);
  yEffLX->GetYaxis()->SetTitle("Efficiency");
  yEffLX->GetXaxis()->SetTitle("y^{#mu#mu}(GeV/c)");
  yEffLX->GetXaxis()->SetNdivisions(505);
  yEffLX->GetXaxis()->CenterTitle(true);
  yEffLX->GetYaxis()->CenterTitle(true);

  leg = new TLegend(0.62,0.22,0.88,0.35);
  leg->AddEntry(yEffv14, "L3DoubleMuOpen (default)", "lp");
  leg->AddEntry(yEffv14_MaxdR, "L3DoubleMuOpen, max dR =4", "lp");
  leg->AddEntry(yEffv14_MatchdR, "L3DoubleMuOpen, matched L1 dR = 1", "lp");
  leg->AddEntry(yEffv15, "L3DoubleMuOpen, min pt = 0.8", "lp");
  leg->AddEntry(yEffv16, "L3DoubleMuOpen, L1 quality = 4", "lp");
  leg->AddEntry(yEffv17, "L3DoubleMuOpen, remove ID", "lp");
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);

  TLine * lyy1 = new TLine (ybins[0],1,ybins[nybins],1);
  lyy1->SetLineColor(kRed);
  lyy1->SetLineStyle(2);
  lyy1->SetLineWidth(2);

  yEffLX->Draw();
  yEffv14->Draw("same");
  yEffv14_MaxdR->Draw("same");
  yEffv14_MatchdR->Draw("same");
  yEffv15->Draw("same");
  yEffv16->Draw("same");
  yEffv17->Draw("same");
  leg->Draw("same");
  lyy1->Draw("same");

  gSystem->mkdir("PlotsTrigEff");
  can->SaveAs("PlotsTrigEff/trigEffVsY_promptJpsi015_v1417DoubleMuOpen_withOptions.pdf");
}


int oniaTree::color(int i) {
  if (i==0) return kMagenta+1;
  else if (i==1) return kBlue+1;
  else if (i==2) return kRed+1;
  else if (i==3) return kCyan+1;
  else if (i==4) return kGreen+1;
  else if (i==5) return kOrange+1;
  else if (i==6) return 28;
  else if (i==7) return kBlack;
  else if (i==8) return kAzure+1;
  else if (i==9) return kYellow+1;
  else return kBlack;
}

void oniaTree::plotAll() {
  Plot("input_HighPtJpsi_L1DoubleMu0_Options_HLTv26");
  Plot("input_HighPtJpsi_L1DoubleMuOpen_Options_HLTv26");
  Plot("input_HighPtJpsi_L3MuX_L1DoubleMuY_ZZ");
  Plot("input_HighPtJpsi_L3MuX_L1DoubleMuY_ZZ_RefDoubleMu0");
  Plot("input_HighPtJpsi_L3MuX_L1DoubleMuY_ZZ_RefDoubleMu0_plus2");
  Plot("input_HighPtJpsi_L3MuX_L1DoubleMuY_ZZ_RefDoubleMuOpen");
  Plot("input_HighPtJpsi_L3MuX_L1DoubleMuY_ZZ_RefDoubleMuOpen_plus2");
  Plot("input_HighPtJpsi_L3MuX_L1DoubleMuY_ZZ_plus2");
  Plot("input_HighPtJpsi_LXDoubleMuOpen_HLTv26");

  Plot("input_Upsilon_L1DoubleMu0_Options_HLTv26");
  Plot("input_Upsilon_L1DoubleMuOpen_Options_HLTv26");
  Plot("input_Upsilon_L3MuX_L1DoubleMuY_ZZ");
  Plot("input_Upsilon_L3MuX_L1DoubleMuY_ZZ_RefDoubleMu0");
  Plot("input_Upsilon_L3MuX_L1DoubleMuY_ZZ_RefDoubleMu0_plus2");
  Plot("input_Upsilon_L3MuX_L1DoubleMuY_ZZ_RefDoubleMuOpen");
  Plot("input_Upsilon_L3MuX_L1DoubleMuY_ZZ_RefDoubleMuOpen_plus2");
  Plot("input_Upsilon_L3MuX_L1DoubleMuY_ZZ_plus2");
  Plot("input_Upsilon_LXDoubleMuOpen_HLTv26");

  Plot("input_Z_LXDoubleMuOpen_HLTv26");
}
