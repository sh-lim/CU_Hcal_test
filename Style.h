#include <TH1.h>
#include <TPad.h>

TH1 *htmp;

void SetPadStyle(){
	gPad->SetLeftMargin(0.15);
	gPad->SetRightMargin(0.11);
	gPad->SetTopMargin(0.05);
	gPad->SetBottomMargin(0.12);

	return;
}

void SetHistoStyle(string xtitle="", string ytitle=""){
	htmp->GetYaxis()->SetLabelFont(62);
	htmp->GetYaxis()->SetTitleFont(62);
	htmp->GetYaxis()->SetTitleOffset(1.3);
	//htmp->GetYaxis()->SetLabelFont(102);
	//htmp->GetYaxis()->SetTitleFont(102);
	htmp->GetYaxis()->SetLabelSize(0.04);
	htmp->GetYaxis()->SetTitleSize(0.05);
	htmp->GetYaxis()->SetTitle(ytitle.c_str());
	htmp->GetXaxis()->SetLabelFont(62);
	htmp->GetXaxis()->SetTitleFont(62);
	//htmp->GetXaxis()->SetLabelFont(102);
	//htmp->GetXaxis()->SetTitleFont(102);
	htmp->GetXaxis()->SetLabelSize(0.04);
	htmp->GetXaxis()->SetTitleSize(0.05);
	htmp->GetXaxis()->SetTitle(xtitle.c_str());
	//htmp->GetXaxis()->SetNdivisions(505);
	htmp->GetXaxis()->SetNdivisions(210);
	htmp->SetTitleFont(62);

	return;
}

