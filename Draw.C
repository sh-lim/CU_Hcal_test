#include "Style.h"

void Draw(const char *fname="data_20180705-1045/20180705-1045_VMIN_SIPM1.txt"){

	ifstream fdata;
	fdata.open(fname);

	const float w_step = 0.5; // cm
	const int n_xstep = 140;
	const int n_ystep = 20;

	int n_data = 0;
	float v_min;

	TH2D *h2D = new TH2D("h2D","",n_xstep,0,n_xstep*w_step,n_ystep,0,w_step*n_ystep);

	while ( fdata >> v_min ){

		int x_ind = n_data/n_ystep;
		int y_ind = n_data%n_ystep;

		float x_pos = x_ind*w_step;
		float y_pos = y_ind*w_step;

		h2D->Fill(x_pos,y_pos,fabs(v_min));

		n_data++;

	}

	fdata.close();

	cout << "N expected: " << n_xstep*n_ystep << ", N measured: " << n_data << endl;

	TCanvas *c1 = new TCanvas("c1","c1",4*250,1.1*250);
	SetPadStyle();
	
	htmp = (TH1D*)gPad->DrawFrame(0,0,40,10);
	SetHistoStyle("x (cm)", "y (cm)");
	h2D->Draw("colz same");


}
