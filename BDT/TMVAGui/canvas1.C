{
//=========Macro generated from canvas: canvas1/TMVA comparison BDTG
//=========  (Fri Jul 21 20:09:56 2017) by ROOT version5.34/18
   TCanvas *canvas1 = new TCanvas("canvas1", "TMVA comparison BDTG",208,31,600,468);
   gStyle->SetOptStat(0);
   canvas1->Range(-1.233751,-1.079353,1.11661,7.915252);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#f0f0f0");
   canvas1->SetFillColor(ci);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetTickx(1);
   canvas1->SetTicky(1);
   canvas1->SetRightMargin(0.05);
   canvas1->SetBottomMargin(0.12);

   ci = TColor::GetColor("#fffffd");
   canvas1->SetFrameFillColor(ci);
   canvas1->SetFrameBorderMode(0);

   ci = TColor::GetColor("#fffffd");
   canvas1->SetFrameFillColor(ci);
   canvas1->SetFrameBorderMode(0);
   
   TH2F *frameBDTG = new TH2F("frameBDTG","TMVA overtraining check for classifier: BDTG",500,-0.9869627,0.9990916,500,0,7.015792);
   frameBDTG->SetStats(0);
   frameBDTG->SetLineWidth(2);
   frameBDTG->SetMarkerStyle(21);
   frameBDTG->SetMarkerSize(0.3);
   frameBDTG->GetXaxis()->SetTitle("BDTG response");
   frameBDTG->GetXaxis()->SetLabelOffset(0.012);
   frameBDTG->GetXaxis()->SetTitleSize(0.045);
   frameBDTG->GetXaxis()->SetTitleOffset(1.25);
   frameBDTG->GetYaxis()->SetTitle("(1/N) dN^{ }/^{ }dx");
   frameBDTG->GetYaxis()->SetLabelOffset(0.012);
   frameBDTG->GetYaxis()->SetTitleSize(0.045);
   frameBDTG->GetYaxis()->SetTitleOffset(1.2);
   frameBDTG->Draw("");
   
   TLegend *leg = new TLegend(0.105,0.78,0.505,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(0);

   ci = TColor::GetColor("#7d8b9d");
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1);
   TLegendEntry *entry=leg->AddEntry("MVA_BDTG_S","Signal (test sample)","F");
   entry->SetFillColor(38);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0000ee");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("MVA_BDTG_B","Background (test sample)","F");
   entry->SetFillColor(2);
   entry->SetFillStyle(3554);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *MVA_BDTG_S = new TH1D("MVA_BDTG_S","TMVA overtraining check for classifier: BDTG",40,-0.9869627,0.9990916);
   MVA_BDTG_S->SetBinContent(1,0.02805075);
   MVA_BDTG_S->SetBinContent(2,0.1355786);
   MVA_BDTG_S->SetBinContent(3,0.2033679);
   MVA_BDTG_S->SetBinContent(4,0.2057055);
   MVA_BDTG_S->SetBinContent(5,0.1542791);
   MVA_BDTG_S->SetBinContent(6,0.1799923);
   MVA_BDTG_S->SetBinContent(7,0.187005);
   MVA_BDTG_S->SetBinContent(8,0.1519415);
   MVA_BDTG_S->SetBinContent(9,0.1659669);
   MVA_BDTG_S->SetBinContent(10,0.1729796);
   MVA_BDTG_S->SetBinContent(11,0.170642);
   MVA_BDTG_S->SetBinContent(12,0.1683045);
   MVA_BDTG_S->SetBinContent(13,0.1636294);
   MVA_BDTG_S->SetBinContent(14,0.1589542);
   MVA_BDTG_S->SetBinContent(15,0.1683045);
   MVA_BDTG_S->SetBinContent(16,0.1589542);
   MVA_BDTG_S->SetBinContent(17,0.187005);
   MVA_BDTG_S->SetBinContent(18,0.2010303);
   MVA_BDTG_S->SetBinContent(19,0.208043);
   MVA_BDTG_S->SetBinContent(20,0.245444);
   MVA_BDTG_S->SetBinContent(21,0.208043);
   MVA_BDTG_S->SetBinContent(22,0.2010303);
   MVA_BDTG_S->SetBinContent(23,0.2360938);
   MVA_BDTG_S->SetBinContent(24,0.2220684);
   MVA_BDTG_S->SetBinContent(25,0.2641445);
   MVA_BDTG_S->SetBinContent(26,0.2758323);
   MVA_BDTG_S->SetBinContent(27,0.2664821);
   MVA_BDTG_S->SetBinContent(28,0.3015455);
   MVA_BDTG_S->SetBinContent(29,0.3108958);
   MVA_BDTG_S->SetBinContent(30,0.336609);
   MVA_BDTG_S->SetBinContent(31,0.46985);
   MVA_BDTG_S->SetBinContent(32,0.4371241);
   MVA_BDTG_S->SetBinContent(33,0.5586774);
   MVA_BDTG_S->SetBinContent(34,0.603091);
   MVA_BDTG_S->SetBinContent(35,0.6895808);
   MVA_BDTG_S->SetBinContent(36,0.902299);
   MVA_BDTG_S->SetBinContent(37,1.098654);
   MVA_BDTG_S->SetBinContent(38,1.549804);
   MVA_BDTG_S->SetBinContent(39,2.557293);
   MVA_BDTG_S->SetBinContent(40,5.236139);
   MVA_BDTG_S->SetBinError(1,0.008097553);
   MVA_BDTG_S->SetBinError(2,0.01780234);
   MVA_BDTG_S->SetBinError(3,0.02180333);
   MVA_BDTG_S->SetBinError(4,0.02192828);
   MVA_BDTG_S->SetBinError(5,0.01899045);
   MVA_BDTG_S->SetBinError(6,0.02051203);
   MVA_BDTG_S->SetBinError(7,0.02090779);
   MVA_BDTG_S->SetBinError(8,0.01884603);
   MVA_BDTG_S->SetBinError(9,0.01969665);
   MVA_BDTG_S->SetBinError(10,0.02010847);
   MVA_BDTG_S->SetBinError(11,0.01997214);
   MVA_BDTG_S->SetBinError(12,0.01983487);
   MVA_BDTG_S->SetBinError(13,0.01955745);
   MVA_BDTG_S->SetBinError(14,0.01927603);
   MVA_BDTG_S->SetBinError(15,0.01983487);
   MVA_BDTG_S->SetBinError(16,0.01927603);
   MVA_BDTG_S->SetBinError(17,0.02090779);
   MVA_BDTG_S->SetBinError(18,0.02167766);
   MVA_BDTG_S->SetBinError(19,0.02205252);
   MVA_BDTG_S->SetBinError(20,0.02395288);
   MVA_BDTG_S->SetBinError(21,0.02205252);
   MVA_BDTG_S->SetBinError(22,0.02167766);
   MVA_BDTG_S->SetBinError(23,0.02349221);
   MVA_BDTG_S->SetBinError(24,0.02278374);
   MVA_BDTG_S->SetBinError(25,0.02484863);
   MVA_BDTG_S->SetBinError(26,0.02539243);
   MVA_BDTG_S->SetBinError(27,0.02495833);
   MVA_BDTG_S->SetBinError(28,0.0265496);
   MVA_BDTG_S->SetBinError(29,0.02695808);
   MVA_BDTG_S->SetBinError(30,0.02805075);
   MVA_BDTG_S->SetBinError(31,0.03314066);
   MVA_BDTG_S->SetBinError(32,0.03196568);
   MVA_BDTG_S->SetBinError(33,0.03613783);
   MVA_BDTG_S->SetBinError(34,0.03754681);
   MVA_BDTG_S->SetBinError(35,0.04014895);
   MVA_BDTG_S->SetBinError(36,0.04592581);
   MVA_BDTG_S->SetBinError(37,0.05067714);
   MVA_BDTG_S->SetBinError(38,0.06018939);
   MVA_BDTG_S->SetBinError(39,0.07731644);
   MVA_BDTG_S->SetBinError(40,0.1106336);
   MVA_BDTG_S->SetEntries(8616);
   MVA_BDTG_S->SetFillColor(38);

   ci = TColor::GetColor("#0000ee");
   MVA_BDTG_S->SetLineColor(ci);
   MVA_BDTG_S->GetXaxis()->SetLabelFont(42);
   MVA_BDTG_S->GetXaxis()->SetLabelSize(0.035);
   MVA_BDTG_S->GetXaxis()->SetTitleSize(0.035);
   MVA_BDTG_S->GetXaxis()->SetTitleFont(42);
   MVA_BDTG_S->GetYaxis()->SetLabelFont(42);
   MVA_BDTG_S->GetYaxis()->SetLabelSize(0.035);
   MVA_BDTG_S->GetYaxis()->SetTitleSize(0.035);
   MVA_BDTG_S->GetYaxis()->SetTitleFont(42);
   MVA_BDTG_S->GetZaxis()->SetLabelFont(42);
   MVA_BDTG_S->GetZaxis()->SetLabelSize(0.035);
   MVA_BDTG_S->GetZaxis()->SetTitleSize(0.035);
   MVA_BDTG_S->GetZaxis()->SetTitleFont(42);
   MVA_BDTG_S->Draw("samehist");
   
   TH1D *MVA_BDTG_B = new TH1D("MVA_BDTG_B","MVA_BDTG_B",40,-0.9869627,0.9990916);
   MVA_BDTG_B->SetBinContent(1,1.793225);
   MVA_BDTG_B->SetBinContent(2,2.645377);
   MVA_BDTG_B->SetBinContent(3,2.171136);
   MVA_BDTG_B->SetBinContent(4,1.822865);
   MVA_BDTG_B->SetBinContent(5,1.311574);
   MVA_BDTG_B->SetBinContent(6,1.207833);
   MVA_BDTG_B->SetBinContent(7,0.9262526);
   MVA_BDTG_B->SetBinContent(8,0.718772);
   MVA_BDTG_B->SetBinContent(9,0.6076217);
   MVA_BDTG_B->SetBinContent(10,0.4964714);
   MVA_BDTG_B->SetBinContent(11,0.4371912);
   MVA_BDTG_B->SetBinContent(12,0.4001411);
   MVA_BDTG_B->SetBinContent(13,0.4001411);
   MVA_BDTG_B->SetBinContent(14,0.2964008);
   MVA_BDTG_B->SetBinContent(15,0.2741708);
   MVA_BDTG_B->SetBinContent(16,0.2667607);
   MVA_BDTG_B->SetBinContent(17,0.2815808);
   MVA_BDTG_B->SetBinContent(18,0.3112209);
   MVA_BDTG_B->SetBinContent(19,0.2519407);
   MVA_BDTG_B->SetBinContent(20,0.1852505);
   MVA_BDTG_B->SetBinContent(21,0.1556104);
   MVA_BDTG_B->SetBinContent(22,0.2223006);
   MVA_BDTG_B->SetBinContent(23,0.2371207);
   MVA_BDTG_B->SetBinContent(24,0.2148906);
   MVA_BDTG_B->SetBinContent(25,0.1185603);
   MVA_BDTG_B->SetBinContent(26,0.1852505);
   MVA_BDTG_B->SetBinContent(27,0.1185603);
   MVA_BDTG_B->SetBinContent(28,0.1407904);
   MVA_BDTG_B->SetBinContent(29,0.2297106);
   MVA_BDTG_B->SetBinContent(30,0.1556104);
   MVA_BDTG_B->SetBinContent(31,0.2148906);
   MVA_BDTG_B->SetBinContent(32,0.1630205);
   MVA_BDTG_B->SetBinContent(33,0.1333804);
   MVA_BDTG_B->SetBinContent(34,0.1333804);
   MVA_BDTG_B->SetBinContent(35,0.1111503);
   MVA_BDTG_B->SetBinContent(36,0.2000706);
   MVA_BDTG_B->SetBinContent(37,0.1185603);
   MVA_BDTG_B->SetBinContent(38,0.1852505);
   MVA_BDTG_B->SetBinContent(39,0.1704305);
   MVA_BDTG_B->SetBinContent(40,0.1259703);
   MVA_BDTG_B->SetBinError(1,0.1152729);
   MVA_BDTG_B->SetBinError(2,0.1400082);
   MVA_BDTG_B->SetBinError(3,0.1268391);
   MVA_BDTG_B->SetBinError(4,0.1162216);
   MVA_BDTG_B->SetBinError(5,0.09858391);
   MVA_BDTG_B->SetBinError(6,0.09460481);
   MVA_BDTG_B->SetBinError(7,0.08284655);
   MVA_BDTG_B->SetBinError(8,0.07298024);
   MVA_BDTG_B->SetBinError(9,0.06710059);
   MVA_BDTG_B->SetBinError(10,0.06065363);
   MVA_BDTG_B->SetBinError(11,0.05691745);
   MVA_BDTG_B->SetBinError(12,0.05445231);
   MVA_BDTG_B->SetBinError(13,0.05445231);
   MVA_BDTG_B->SetBinError(14,0.04686509);
   MVA_BDTG_B->SetBinError(15,0.0450734);
   MVA_BDTG_B->SetBinError(16,0.04446012);
   MVA_BDTG_B->SetBinError(17,0.04567843);
   MVA_BDTG_B->SetBinError(18,0.04802242);
   MVA_BDTG_B->SetBinError(19,0.04320747);
   MVA_BDTG_B->SetBinError(20,0.0370501);
   MVA_BDTG_B->SetBinError(21,0.03395698);
   MVA_BDTG_B->SetBinError(22,0.04058635);
   MVA_BDTG_B->SetBinError(23,0.04191741);
   MVA_BDTG_B->SetBinError(24,0.03990418);
   MVA_BDTG_B->SetBinError(25,0.02964008);
   MVA_BDTG_B->SetBinError(26,0.0370501);
   MVA_BDTG_B->SetBinError(27,0.02964008);
   MVA_BDTG_B->SetBinError(28,0.03229953);
   MVA_BDTG_B->SetBinError(29,0.04125725);
   MVA_BDTG_B->SetBinError(30,0.03395698);
   MVA_BDTG_B->SetBinError(31,0.03990418);
   MVA_BDTG_B->SetBinError(32,0.03475608);
   MVA_BDTG_B->SetBinError(33,0.03143805);
   MVA_BDTG_B->SetBinError(34,0.03143805);
   MVA_BDTG_B->SetBinError(35,0.02869889);
   MVA_BDTG_B->SetBinError(36,0.0385036);
   MVA_BDTG_B->SetBinError(37,0.02964008);
   MVA_BDTG_B->SetBinError(38,0.0370501);
   MVA_BDTG_B->SetBinError(39,0.03553721);
   MVA_BDTG_B->SetBinError(40,0.0305523);
   MVA_BDTG_B->SetEntries(2718);
   MVA_BDTG_B->SetFillColor(2);
   MVA_BDTG_B->SetFillStyle(3554);
   MVA_BDTG_B->SetLineColor(2);
   MVA_BDTG_B->GetXaxis()->SetLabelFont(42);
   MVA_BDTG_B->GetXaxis()->SetLabelSize(0.035);
   MVA_BDTG_B->GetXaxis()->SetTitleSize(0.035);
   MVA_BDTG_B->GetXaxis()->SetTitleFont(42);
   MVA_BDTG_B->GetYaxis()->SetLabelFont(42);
   MVA_BDTG_B->GetYaxis()->SetLabelSize(0.035);
   MVA_BDTG_B->GetYaxis()->SetTitleSize(0.035);
   MVA_BDTG_B->GetYaxis()->SetTitleFont(42);
   MVA_BDTG_B->GetZaxis()->SetLabelFont(42);
   MVA_BDTG_B->GetZaxis()->SetLabelSize(0.035);
   MVA_BDTG_B->GetZaxis()->SetTitleSize(0.035);
   MVA_BDTG_B->GetZaxis()->SetTitleFont(42);
   MVA_BDTG_B->Draw("samehist");
   
   leg = new TLegend(0.53,0.78,0.95,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(0);

   ci = TColor::GetColor("#7d8b9d");
   leg->SetLineColor(ci);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(19);
   leg->SetFillStyle(1);
   entry=leg->AddEntry("MVA_BDTG_Train_S","Signal (training sample)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ee");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   entry=leg->AddEntry("MVA_BDTG_Train_B","Background (training sample)","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.7);
   leg->Draw();
   
   TH1D *MVA_BDTG_Train_S = new TH1D("MVA_BDTG_Train_S","MVA_BDTG_Train_S",40,-0.9869627,0.9990916);
   MVA_BDTG_Train_S->SetBinContent(1,0.01402537);
   MVA_BDTG_Train_S->SetBinContent(2,0.09016311);
   MVA_BDTG_Train_S->SetBinContent(3,0.1382501);
   MVA_BDTG_Train_S->SetBinContent(4,0.1472664);
   MVA_BDTG_Train_S->SetBinContent(5,0.1723117);
   MVA_BDTG_Train_S->SetBinContent(6,0.1522755);
   MVA_BDTG_Train_S->SetBinContent(7,0.1893425);
   MVA_BDTG_Train_S->SetBinContent(8,0.1642972);
   MVA_BDTG_Train_S->SetBinContent(9,0.1352447);
   MVA_BDTG_Train_S->SetBinContent(10,0.176319);
   MVA_BDTG_Train_S->SetBinContent(11,0.1512737);
   MVA_BDTG_Train_S->SetBinContent(12,0.1683045);
   MVA_BDTG_Train_S->SetBinContent(13,0.1612918);
   MVA_BDTG_Train_S->SetBinContent(14,0.1963552);
   MVA_BDTG_Train_S->SetBinContent(15,0.1873389);
   MVA_BDTG_Train_S->SetBinContent(16,0.1873389);
   MVA_BDTG_Train_S->SetBinContent(17,0.1582864);
   MVA_BDTG_Train_S->SetBinContent(18,0.1783226);
   MVA_BDTG_Train_S->SetBinContent(19,0.1853353);
   MVA_BDTG_Train_S->SetBinContent(20,0.213386);
   MVA_BDTG_Train_S->SetBinContent(21,0.2173933);
   MVA_BDTG_Train_S->SetBinContent(22,0.2023661);
   MVA_BDTG_Train_S->SetBinContent(23,0.2434404);
   MVA_BDTG_Train_S->SetBinContent(24,0.2374295);
   MVA_BDTG_Train_S->SetBinContent(25,0.2464458);
   MVA_BDTG_Train_S->SetBinContent(26,0.2955346);
   MVA_BDTG_Train_S->SetBinContent(27,0.2905256);
   MVA_BDTG_Train_S->SetBinContent(28,0.3155709);
   MVA_BDTG_Train_S->SetBinContent(29,0.3275926);
   MVA_BDTG_Train_S->SetBinContent(30,0.3706706);
   MVA_BDTG_Train_S->SetBinContent(31,0.4438029);
   MVA_BDTG_Train_S->SetBinContent(32,0.4508156);
   MVA_BDTG_Train_S->SetBinContent(33,0.4808699);
   MVA_BDTG_Train_S->SetBinContent(34,0.5990838);
   MVA_BDTG_Train_S->SetBinContent(35,0.747352);
   MVA_BDTG_Train_S->SetBinContent(36,0.8695731);
   MVA_BDTG_Train_S->SetBinContent(37,1.095983);
   MVA_BDTG_Train_S->SetBinContent(38,1.588874);
   MVA_BDTG_Train_S->SetBinContent(39,2.55362);
   MVA_BDTG_Train_S->SetBinContent(40,5.396763);
   MVA_BDTG_Train_S->SetBinContent(41,0.001001812);
   MVA_BDTG_Train_S->SetBinError(1,0.003748439);
   MVA_BDTG_Train_S->SetBinError(2,0.009504027);
   MVA_BDTG_Train_S->SetBinError(3,0.01176863);
   MVA_BDTG_Train_S->SetBinError(4,0.01214633);
   MVA_BDTG_Train_S->SetBinError(5,0.01313865);
   MVA_BDTG_Train_S->SetBinError(6,0.01235117);
   MVA_BDTG_Train_S->SetBinError(7,0.01377264);
   MVA_BDTG_Train_S->SetBinError(8,0.01282946);
   MVA_BDTG_Train_S->SetBinError(9,0.01164001);
   MVA_BDTG_Train_S->SetBinError(10,0.01329054);
   MVA_BDTG_Train_S->SetBinError(11,0.01231048);
   MVA_BDTG_Train_S->SetBinError(12,0.01298497);
   MVA_BDTG_Train_S->SetBinError(13,0.01271157);
   MVA_BDTG_Train_S->SetBinError(14,0.01402537);
   MVA_BDTG_Train_S->SetBinError(15,0.01369958);
   MVA_BDTG_Train_S->SetBinError(16,0.01369958);
   MVA_BDTG_Train_S->SetBinError(17,0.01259259);
   MVA_BDTG_Train_S->SetBinError(18,0.01336584);
   MVA_BDTG_Train_S->SetBinError(19,0.01362612);
   MVA_BDTG_Train_S->SetBinError(20,0.01462097);
   MVA_BDTG_Train_S->SetBinError(21,0.01475762);
   MVA_BDTG_Train_S->SetBinError(22,0.01423843);
   MVA_BDTG_Train_S->SetBinError(23,0.01561671);
   MVA_BDTG_Train_S->SetBinError(24,0.01542271);
   MVA_BDTG_Train_S->SetBinError(25,0.01571281);
   MVA_BDTG_Train_S->SetBinError(26,0.01720669);
   MVA_BDTG_Train_S->SetBinError(27,0.01706025);
   MVA_BDTG_Train_S->SetBinError(28,0.01778041);
   MVA_BDTG_Train_S->SetBinError(29,0.01811591);
   MVA_BDTG_Train_S->SetBinError(30,0.01927025);
   MVA_BDTG_Train_S->SetBinError(31,0.02108571);
   MVA_BDTG_Train_S->SetBinError(32,0.02125165);
   MVA_BDTG_Train_S->SetBinError(33,0.02194861);
   MVA_BDTG_Train_S->SetBinError(34,0.02449836);
   MVA_BDTG_Train_S->SetBinError(35,0.0273625);
   MVA_BDTG_Train_S->SetBinError(36,0.02951524);
   MVA_BDTG_Train_S->SetBinError(37,0.03313562);
   MVA_BDTG_Train_S->SetBinError(38,0.03989679);
   MVA_BDTG_Train_S->SetBinError(39,0.05057912);
   MVA_BDTG_Train_S->SetBinError(40,0.07352921);
   MVA_BDTG_Train_S->SetBinError(41,0.001001812);
   MVA_BDTG_Train_S->SetEntries(20105);

   ci = TColor::GetColor("#0000ee");
   MVA_BDTG_Train_S->SetLineColor(ci);

   ci = TColor::GetColor("#0000ee");
   MVA_BDTG_Train_S->SetMarkerColor(ci);
   MVA_BDTG_Train_S->SetMarkerStyle(20);
   MVA_BDTG_Train_S->SetMarkerSize(0.7);
   MVA_BDTG_Train_S->GetXaxis()->SetLabelFont(42);
   MVA_BDTG_Train_S->GetXaxis()->SetLabelSize(0.035);
   MVA_BDTG_Train_S->GetXaxis()->SetTitleSize(0.035);
   MVA_BDTG_Train_S->GetXaxis()->SetTitleFont(42);
   MVA_BDTG_Train_S->GetYaxis()->SetLabelFont(42);
   MVA_BDTG_Train_S->GetYaxis()->SetLabelSize(0.035);
   MVA_BDTG_Train_S->GetYaxis()->SetTitleSize(0.035);
   MVA_BDTG_Train_S->GetYaxis()->SetTitleFont(42);
   MVA_BDTG_Train_S->GetZaxis()->SetLabelFont(42);
   MVA_BDTG_Train_S->GetZaxis()->SetLabelSize(0.035);
   MVA_BDTG_Train_S->GetZaxis()->SetTitleSize(0.035);
   MVA_BDTG_Train_S->GetZaxis()->SetTitleFont(42);
   MVA_BDTG_Train_S->Draw("e1same");
   
   TH1D *MVA_BDTG_Train_B = new TH1D("MVA_BDTG_Train_B","MVA_BDTG_Train_B",40,-0.9869627,0.9990916);
   MVA_BDTG_Train_B->SetBinContent(0,0.009527169);
   MVA_BDTG_Train_B->SetBinContent(1,1.765702);
   MVA_BDTG_Train_B->SetBinContent(2,2.664432);
   MVA_BDTG_Train_B->SetBinContent(3,2.400847);
   MVA_BDTG_Train_B->SetBinContent(4,1.718066);
   MVA_BDTG_Train_B->SetBinContent(5,1.524347);
   MVA_BDTG_Train_B->SetBinContent(6,1.197248);
   MVA_BDTG_Train_B->SetBinContent(7,0.9273111);
   MVA_BDTG_Train_B->SetBinContent(8,0.917784);
   MVA_BDTG_Train_B->SetBinContent(9,0.6605504);
   MVA_BDTG_Train_B->SetBinContent(10,0.5748059);
   MVA_BDTG_Train_B->SetBinContent(11,0.5081157);
   MVA_BDTG_Train_B->SetBinContent(12,0.4382498);
   MVA_BDTG_Train_B->SetBinContent(13,0.4064926);
   MVA_BDTG_Train_B->SetBinContent(14,0.3715596);
   MVA_BDTG_Train_B->SetBinContent(15,0.4223712);
   MVA_BDTG_Train_B->SetBinContent(16,0.3112209);
   MVA_BDTG_Train_B->SetBinContent(17,0.2953422);
   MVA_BDTG_Train_B->SetBinContent(18,0.2254763);
   MVA_BDTG_Train_B->SetBinContent(19,0.2604093);
   MVA_BDTG_Train_B->SetBinContent(20,0.2223006);
   MVA_BDTG_Train_B->SetBinContent(21,0.2191249);
   MVA_BDTG_Train_B->SetBinContent(22,0.1905434);
   MVA_BDTG_Train_B->SetBinContent(23,0.1587862);
   MVA_BDTG_Train_B->SetBinContent(24,0.171489);
   MVA_BDTG_Train_B->SetBinContent(25,0.1397318);
   MVA_BDTG_Train_B->SetBinContent(26,0.1841919);
   MVA_BDTG_Train_B->SetBinContent(27,0.09844742);
   MVA_BDTG_Train_B->SetBinContent(28,0.1238532);
   MVA_BDTG_Train_B->SetBinContent(29,0.1270289);
   MVA_BDTG_Train_B->SetBinContent(30,0.114326);
   MVA_BDTG_Train_B->SetBinContent(31,0.1333804);
   MVA_BDTG_Train_B->SetBinContent(32,0.1047989);
   MVA_BDTG_Train_B->SetBinContent(33,0.07939308);
   MVA_BDTG_Train_B->SetBinContent(34,0.114326);
   MVA_BDTG_Train_B->SetBinContent(35,0.07939308);
   MVA_BDTG_Train_B->SetBinContent(36,0.08574452);
   MVA_BDTG_Train_B->SetBinContent(37,0.08574452);
   MVA_BDTG_Train_B->SetBinContent(38,0.04446012);
   MVA_BDTG_Train_B->SetBinContent(39,0.06986591);
   MVA_BDTG_Train_B->SetBinContent(40,0.003175723);
   MVA_BDTG_Train_B->SetBinError(0,0.005500514);
   MVA_BDTG_Train_B->SetBinError(1,0.07488245);
   MVA_BDTG_Train_B->SetBinError(2,0.0919864);
   MVA_BDTG_Train_B->SetBinError(3,0.08731795);
   MVA_BDTG_Train_B->SetBinError(4,0.07386544);
   MVA_BDTG_Train_B->SetBinError(5,0.06957661);
   MVA_BDTG_Train_B->SetBinError(6,0.06166139);
   MVA_BDTG_Train_B->SetBinError(7,0.05426678);
   MVA_BDTG_Train_B->SetBinError(8,0.05398729);
   MVA_BDTG_Train_B->SetBinError(9,0.04580093);
   MVA_BDTG_Train_B->SetBinError(10,0.04272498);
   MVA_BDTG_Train_B->SetBinError(11,0.04017007);
   MVA_BDTG_Train_B->SetBinError(12,0.0373063);
   MVA_BDTG_Train_B->SetBinError(13,0.03592921);
   MVA_BDTG_Train_B->SetBinError(14,0.0343507);
   MVA_BDTG_Train_B->SetBinError(15,0.03662423);
   MVA_BDTG_Train_B->SetBinError(16,0.03143805);
   MVA_BDTG_Train_B->SetBinError(17,0.03062556);
   MVA_BDTG_Train_B->SetBinError(18,0.02675912);
   MVA_BDTG_Train_B->SetBinError(19,0.0287574);
   MVA_BDTG_Train_B->SetBinError(20,0.02657001);
   MVA_BDTG_Train_B->SetBinError(21,0.02637954);
   MVA_BDTG_Train_B->SetBinError(22,0.02459905);
   MVA_BDTG_Train_B->SetBinError(23,0.02245575);
   MVA_BDTG_Train_B->SetBinError(24,0.0233367);
   MVA_BDTG_Train_B->SetBinError(25,0.02106536);
   MVA_BDTG_Train_B->SetBinError(26,0.02418559);
   MVA_BDTG_Train_B->SetBinError(27,0.01768168);
   MVA_BDTG_Train_B->SetBinError(28,0.01983238);
   MVA_BDTG_Train_B->SetBinError(29,0.02008504);
   MVA_BDTG_Train_B->SetBinError(30,0.01905434);
   MVA_BDTG_Train_B->SetBinError(31,0.02058104);
   MVA_BDTG_Train_B->SetBinError(32,0.01824314);
   MVA_BDTG_Train_B->SetBinError(33,0.01587862);
   MVA_BDTG_Train_B->SetBinError(34,0.01905434);
   MVA_BDTG_Train_B->SetBinError(35,0.01587862);
   MVA_BDTG_Train_B->SetBinError(36,0.01650154);
   MVA_BDTG_Train_B->SetBinError(37,0.01650154);
   MVA_BDTG_Train_B->SetBinError(38,0.01188247);
   MVA_BDTG_Train_B->SetBinError(39,0.01489546);
   MVA_BDTG_Train_B->SetBinError(40,0.003175723);
   MVA_BDTG_Train_B->SetEntries(6345);
   MVA_BDTG_Train_B->SetLineColor(2);
   MVA_BDTG_Train_B->SetMarkerColor(2);
   MVA_BDTG_Train_B->SetMarkerStyle(20);
   MVA_BDTG_Train_B->SetMarkerSize(0.7);
   MVA_BDTG_Train_B->GetXaxis()->SetLabelFont(42);
   MVA_BDTG_Train_B->GetXaxis()->SetLabelSize(0.035);
   MVA_BDTG_Train_B->GetXaxis()->SetTitleSize(0.035);
   MVA_BDTG_Train_B->GetXaxis()->SetTitleFont(42);
   MVA_BDTG_Train_B->GetYaxis()->SetLabelFont(42);
   MVA_BDTG_Train_B->GetYaxis()->SetLabelSize(0.035);
   MVA_BDTG_Train_B->GetYaxis()->SetTitleSize(0.035);
   MVA_BDTG_Train_B->GetYaxis()->SetTitleFont(42);
   MVA_BDTG_Train_B->GetZaxis()->SetLabelFont(42);
   MVA_BDTG_Train_B->GetZaxis()->SetLabelSize(0.035);
   MVA_BDTG_Train_B->GetZaxis()->SetTitleSize(0.035);
   MVA_BDTG_Train_B->GetZaxis()->SetTitleFont(42);
   MVA_BDTG_Train_B->Draw("e1same");
   TText *text = new TText(0.12,0.74,"Kolmogorov-Smirnov test: signal (background) probability = 0.002 (    0)");
   text->SetNDC();
   text->SetTextSize(0.032);
   text->Draw();
   
   TH2F *frameBDTG = new TH2F("frameBDTG","TMVA overtraining check for classifier: BDTG",500,-0.9869627,0.9990916,500,0,7.015792);
   frameBDTG->SetStats(0);
   frameBDTG->SetLineWidth(2);
   frameBDTG->SetMarkerStyle(21);
   frameBDTG->SetMarkerSize(0.3);
   frameBDTG->GetXaxis()->SetTitle("BDTG response");
   frameBDTG->GetXaxis()->SetLabelOffset(0.012);
   frameBDTG->GetXaxis()->SetTitleSize(0.045);
   frameBDTG->GetXaxis()->SetTitleOffset(1.25);
   frameBDTG->GetYaxis()->SetTitle("(1/N) dN^{ }/^{ }dx");
   frameBDTG->GetYaxis()->SetLabelOffset(0.012);
   frameBDTG->GetYaxis()->SetTitleSize(0.045);
   frameBDTG->GetYaxis()->SetTitleOffset(1.2);
   frameBDTG->Draw("sameaxis");
   text = new TText(0.975,0.115,"U/O-flow (S,B): (0.0, 0.0)% / (0.0, 0.0)%");
   text->SetNDC();
   text->SetTextSize(0.03);
   text->SetTextAngle(90);
   text->Draw();
   
   TPaveText *pt = new TPaveText(0.01,0.9377273,0.71,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(1);

   ci = TColor::GetColor("#5d6b7d");
   pt->SetFillColor(ci);

   ci = TColor::GetColor("#7d8b9d");
   pt->SetLineColor(ci);
   pt->SetTextColor(0);
   TText *text = pt->AddText("TMVA overtraining check for classifier: BDTG");
   pt->Draw();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
