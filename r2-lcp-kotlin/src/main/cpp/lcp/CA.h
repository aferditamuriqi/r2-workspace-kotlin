#ifndef __CA_H__
#define __CA_H__

namespace lcp {
const char *CA_ECDSA_PEM =
"-----BEGIN CERTIFICATE-----\n"
"MIIDxDCCAqygAwIBAgIIbAdC85NXQDEwDQYJKoZIhvcNAQELBQAwTjEUMBIGA1UE\n"
"ChMLUmVhZGl1bSBMQ1AxGDAWBgNVBAsTD1JlYWRpdW0gTENQIFBLSTEcMBoGA1UE\n"
"AxMTUmVhZGl1bSBMQ1AgUm9vdCBDQTAeFw0xNjExMjkxMDAwMDJaFw00NjExMjky\n"
"MzU5NTlaMEIxEzARBgNVBAoTCmVkcmxhYi5vcmcxFzAVBgNVBAsTDmVkcmxhYi5v\n"
"cmcgTENQMRIwEAYDVQQDEwlFRFJMYWIgQ0EwggEiMA0GCSqGSIb3DQEBAQUAA4IB\n"
"DwAwggEKAoIBAQDLuJoDa6bdqNBDjo130aYOVweEFz//+ythWxd9BmWy4QZ4F6kf\n"
"U9oTLmgRgZ2LWa48Z4PwmNX04bZ/JeWT3ACAfHZj0JXXc+uz+evVSgiRcxw8k/JS\n"
"YMDiCpj8SgP4LVbfO7Pg+LzFBtjiHp/5KZtl3DO/caeWxfBXaxT64CEGqigpLiZ7\n"
"EaPp3/mmBAx1n1AJrvyUnJvQ17e5i75WjEnTXybuCGWZMHwtB/qatFp8E5gs52+1\n"
"gSlrJzRtE0jAA1AG6wFAb2bXoCheLRR7n3AASezbmE2oEKeJPXDxBGezz+Yqem/1\n"
"smTv16AQKo4bfwuSaBQTm8V3um5HlOmW+M5LAgMBAAGjgbEwga4wDgYDVR0PAQH/\n"
"BAQDAgGGMB0GA1UdDgQWBBTcXPyT5B+f7rC66lILK8pSXODJhzAfBgNVHSMEGDAW\n"
"gBR6reuglOgbGTVJUvMTTwm5teTdMDASBgNVHRMBAf8ECDAGAQH/AgEAMEgGA1Ud\n"
"HwRBMD8wPaA7oDmGN2h0dHA6Ly9jcmwuZWRybGFiLnRlbGVzZWMuZGUvcmwvUmVh\n"
"ZGl1bV9MQ1BfUm9vdF9DQS5jcmwwDQYJKoZIhvcNAQELBQADggEBALQcmcf1XApy\n"
"TkPPmk5noiNuIm9OR7weaU8Wi4h0KxvQnbBX5csWbb3gspDSqUTTFZb7fvuD5U3c\n"
"mnuNst8jmJ9J1h7oYkNY8PyAS0CPl9ccG890ObJ7iv4tJ5gEMI83dlFzd8rps08m\n"
"uQJNGPbzZUP4WAWAQXS6AHS+cEj+9ykml3lhm6/OpzlMl6CPjdYD8k4eAo4KJlLg\n"
"mQKygYoBiVQdl2rmUgrMWv2vLmu5lgrCXfyynobAgHGhB5K0rMtu7moOkwekh1fe\n"
"qhGRLy/wMBsZ2AZEux17m6h8ead+1Eh7qCkVtLMPj18zthimKhmAzR9UODNO8adb\n"
"28V6rdu3cxE=\n"
"-----END CERTIFICATE-----\n";

const char *CA_RSA_PEM =
"-----BEGIN CERTIFICATE-----\n"
"MIIFZzCCA0+gAwIBAgIJAMWdQaWkExQEMA0GCSqGSIb3DQEBCwUAMGcxCzAJBgNV\n"
"BAYTAkZSMQ4wDAYDVQQHEwVQYXJpczEPMA0GA1UEChMGRURSTGFiMRIwEAYDVQQL\n"
"EwlMQ1AgVGVzdHMxIzAhBgNVBAMTGkVEUkxhYiBSZWFkaXVtIExDUCB0ZXN0IENB\n"
"MB4XDTE2MDMyNDIyNTc1OVoXDTM4MDExODIyNTc1OVowZzELMAkGA1UEBhMCRlIx\n"
"DjAMBgNVBAcTBVBhcmlzMQ8wDQYDVQQKEwZFRFJMYWIxEjAQBgNVBAsTCUxDUCBU\n"
"ZXN0czEjMCEGA1UEAxMaRURSTGFiIFJlYWRpdW0gTENQIHRlc3QgQ0EwggIiMA0G\n"
"CSqGSIb3DQEBAQUAA4ICDwAwggIKAoICAQDfxfveCISAmGDhXcZj+q6cXD3zQDr/\n"
"kRG4fnqBm1rxFN1nshI0ObSMNwcV98c3D2swewQ6qFa+4INRakrF4ObtPtiQ7Tti\n"
"/qYWf41rez/8x5M+DFeca8SIuf4Wi2u310EoplQm4JX3Qnvax7I/ivl+BtSzDY1h\n"
"4bkA9dPPrp/vGa8dh0rIYaclJ9UEW/i4jyQkry36BfGKboOMYZioqPJfOFIIiSTb\n"
"0nvHERssaS2MobWACinRRwL7Mih4mUV/v9Vhry3jN+wfxMKA+J/zcsY6p9HVgIhE\n"
"kmyDIH4/vw+mLMcUQ4YFQeIOKRBRLHYcLHOUQNNIDw2gJAK/G/rfOeW3zu/tYCpk\n"
"hT8PWrhd4zM+TdegpeFkidnNSvYFlKrojWhJisty3HuD+BXQ6ArjikIj4dCYc2BM\n"
"ZVUH50FEwl1ZpndQAySMCceOX8t6RX4jqbvhbyXjqR/Nr5SaN8G6gHemX/5LWdOa\n"
"5D8dUwOGbQjR7igLQy+4UNefjvFp8Z5/No/vLD/3Ziwau+wFjcGXs9UdpqKgIzfW\n"
"KAu77vPVb0vUvDczOU4HRx4bB3eAb4gI6meBYHKroogIpteDOfco48zhweiMGasz\n"
"HwBU4rylW/seV/2l5IunsGNRSlVtT4z5xL7kn5fcYy5ZtStJrrOKZSJWaH+3Mvmb\n"
"sgwPqlZYMNAoiwIDAQABoxYwFDASBgNVHRMBAf8ECDAGAQH/AgEAMA0GCSqGSIb3\n"
"DQEBCwUAA4ICAQCmMGGqjnIo0BgItLmKrXW8yFRncZdjLAS5fCRNO0C34vDrm9N/\n"
"y1qhoITqQ+vKVeA+M/sWzTQihPz+pyWGfvjqxdagpepPERX0ZFENMJaP5Sc8R0bL\n"
"y96Xxk7L/SnVvJ2jgRP/D7X6jQrLxQbDceFRPelE+KcrcfAQdTLO9VTJEIkr4j6L\n"
"BMDjqMcXASo+/t5fAhz3rUlo1gvhgdX+E4iJSoPwimr0pmUWFS473eS8Jrgn5meG\n"
"Pq5Kmf3Q+1hYlisIAzRARJXWJxBxeI+VLCF2c90m1MLXpET4tm2s8Ln9ePw4edGM\n"
"crwbR4nTEN+aGbPyo0yhs+smQA28B1LRnnZRyj70wHii6PN9+qtbr1S41FzKnLvO\n"
"EBU63KxOE+NiN4p8q/Gx2J+lDtNy4OKEjgNNpp9fpzEbcSdnNK1dmZTbdKFV/QqT\n"
"DQ8paH3TWX0eel/LeBHyn5W6A6B0maLRKNN98jcbqDyx2RfkEcEqvlQgEThNKH/6\n"
"2hfQ8BEAzFdevtenyjKbnHmJ861t/hAnvCbbxMrT0gzgK2+gnqTFJiON3s0SObsG\n"
"ivPak5w5wtvreFvEHCntnhIocuqc9AOFoDdQo9idB25YUzwot0NNL6pShMNXNE6F\n"
"Imaa1w7gBDc+DVRYAoJzHF+awCOgqEDEXu67GHgcrXpQ9Ts7Eq+wjNy9OQ==\n"
"-----END CERTIFICATE-----";
}
#endif //__CA_H__
