{

    gROOT->ProcessLine(".L ../NanoCORE/NANO_CORE.so");
    gROOT->ProcessLine(".L ScanChain.C+");
    TChain *ch = new TChain("Events");

    ch->Add("root://cmsxrootd.fnal.gov//store/mc/RunIISummer20UL18NanoAODv9/WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8/NANOAODSIM/106X_upgrade2018_realistic_v16_L1v1_ext1-v2/2500000/4BC16083-4C04-394C-A77B-55305DE81149.root");

    ScanChain(ch);

}
