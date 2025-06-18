/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x282828ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xD4BE98ff, 0x282828ff, 0x725d5dff },
	[SchemeSel]  = { 0xD4BE98ff, 0xE05D24ff, 0xD95222ff },
	[SchemeUrg]  = { 0xD4BE98ff, 0xD95222ff, 0xE05D24ff },
};
