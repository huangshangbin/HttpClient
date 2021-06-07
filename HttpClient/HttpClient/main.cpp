#include <iostream>

using namespace std;

#include <httpClient/HttpClient.h>


int main()
{
	HTTPClient httpClient;
	HTTPRequest req;
	HTTPResponse res;
	std::string configFileStr;
	req.url = "http://www.logicnx.com/Content/UploadFile/PAMM/Decoder_Global_Markets_Ltd/Mt4PluginCopyTrade_Config.xml";

	httpClient.get(req, res, configFileStr);

	cout << configFileStr << endl;

	int a;
	cin >> a;

	return 0;
}