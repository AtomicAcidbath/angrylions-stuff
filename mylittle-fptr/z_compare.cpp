#include "z64.h"
#include "commonrdp.h"
#include "externfunc.h"






UINT32 z_compare_generic(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_generic(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);

UINT32 z_compare_nozcomp_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);
UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc);

STRICTINLINE UINT32 dz_decompress(UINT32 zcurpixel, UINT32 dzcurpixel);


UINT32 (*z_compare_func[0x400])(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc) = 
{
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_fb_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_fb_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_fb_coc_nocvu,
	z_compare_zcomp_zmode1_ir_noblsh_fb_coc_nocvu,
	z_compare_zcomp_zmode2_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc_nocvu,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc_nocvu,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_nococ,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_fb_nococ,
	z_compare_nozcomp_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode1_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode2_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_noblsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_noblsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_blsh_fb_nococ,
	z_compare_nozcomp_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode0_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode1_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode2_ir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_noir_blsh_fb_nococ,
	z_compare_zcomp_zmode3_ir_blsh_fb_nococ,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_blsh_nofb_noae_coc,
	z_compare_nozcomp_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_noae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_noae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode1_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode2_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_ir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_blsh_nofb_ae_coc,
	z_compare_nozcomp_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode0_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode2_ir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_noir_blsh_nofb_ae_coc,
	z_compare_zcomp_zmode3_ir_blsh_nofb_ae_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_noblsh_fb_coc,
	z_compare_nozcomp_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode0_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode1_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode1_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode2_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode2_ir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_noir_noblsh_fb_coc,
	z_compare_zcomp_zmode3_ir_noblsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_nozcomp_noir_blsh_fb_coc,
	z_compare_nozcomp_ir_blsh_fb_coc,
	z_compare_zcomp_zmode0_noir_blsh_fb_coc,
	z_compare_zcomp_zmode0_ir_blsh_fb_coc,
	z_compare_zcomp_zmode1_noir_blsh_fb_coc,
	z_compare_zcomp_zmode1_ir_blsh_fb_coc,
	z_compare_zcomp_zmode2_noir_blsh_fb_coc,
	z_compare_zcomp_zmode2_ir_blsh_fb_coc,
	z_compare_zcomp_zmode3_noir_blsh_fb_coc,
	z_compare_zcomp_zmode3_ir_blsh_fb_coc
};

extern UINT32 idxlim16;
extern UINT16* _rdram_16;
extern OTHER_MODES other_modes;
extern UINT8 hidden_bits[];


extern UINT32 blend_en;
extern UINT32 prewrap;
extern int blshifta, blshiftb;
extern UINT32 curpixel_cvg, curpixel_memcvg;

#define RREADIDX16(in) (((in) <= idxlim16) ? (_rdram_16[(in) ^ WORD_ADDR_XOR]) : 0)
#define HREADADDR8(in) (((in) <= 0x3fffff) ? (hidden_bits[(in) ^ BYTE_ADDR_XOR]) : 0)

UINT32 z_compare_generic(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{


	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	if (other_modes.z_compare_en)
	{
		oz = z_decompress(zcurpixel);
		dzmem = dz_decompress(zcurpixel, dzcurpixel);
		zval = RREADIDX16(zcurpixel);
		rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);
	}
	else
	{
		oz = 0;
		dzmem = 1 << 0xf;
		zval = 0x3;
		rawdzmem = 0xf;
	}

	
	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	
	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;
	

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = other_modes.force_blend || (!overflow && other_modes.antialias_en && farther);
	
	prewrap = overflow;
	
	
	
	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (other_modes.z_mode == 1 && infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}
	
	if (!other_modes.z_compare_en)
		return 1;

	
	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	switch(other_modes.z_mode)
	{
	case 0: 
		return (max || (overflow ? infront : nearer));
		break;
	case 1: 
		return (max || (overflow ? infront : nearer)); 
		break;
	case 2: 
		return (infront || max); 
		break;
	case 3: 
		return (farther && nearer && !max); 
		break;
	}
	return 0;
}

UINT32 z_compare_zcomp_generic(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = other_modes.force_blend || (!overflow && other_modes.antialias_en && farther);
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (other_modes.z_mode == 1 && infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	switch(other_modes.z_mode)
	{
	case 0: 
		return (max || (overflow ? infront : nearer));
		break;
	case 1: 
		return (max || (overflow ? infront : nearer)); 
		break;
	case 2: 
		return (infront || max); 
		break;
	case 3: 
		return (farther && nearer && !max); 
		break;
	}
	return 0;
}


UINT32 z_compare_nozcomp_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	prewrap = curpixel_cvg > 0;
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	prewrap = curpixel_cvg > 0;
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	prewrap = curpixel_cvg > 0;
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_zcomp_zmode0_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}


UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode2_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode3_ir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_blsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_nozcomp_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow;
	prewrap = overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow;
	prewrap = overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow;
	prewrap = overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow;
	prewrap = overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow;
	prewrap = overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow;
	prewrap = overflow;
	
	return 1;
}

UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_nozcomp_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	prewrap = curpixel_cvg > 0;
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_coc_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;
	prewrap = overflow;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_coc(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	prewrap = curpixel_cvg > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_nozcomp_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{	
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blend_en = 1;
	
	return 1;
}

UINT32 z_compare_zcomp_zmode0_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_fb_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 1;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode2_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 1;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode3_ir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_blsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_fb_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
	
	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 1;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_nozcomp_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow;
	
	return 1;
}

UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_ae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_ae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = !overflow && farther;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_nozcomp_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{	
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blshifta = CLIP(dzpixenc - 0xf, 0, 4);
	blshiftb = CLIP(0xf - dzpixenc, 0, 4);
	
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_nozcomp_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	blend_en = 0;
	
	return 1;
}

UINT32 z_compare_zcomp_zmode0_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode0_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer));
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_blsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_ir_noblsh_nozup_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = ((curpixel_memcvg + curpixel_cvg) & 8) > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_blsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	UINT32 dznotshift = dznew;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;
	
	if (infront && farther && overflow)
	{
		dzenc = dz_compress(dznotshift & 0xffff);
		cvgcoeff = ((oz >> dzenc) - (sz >> dzenc)) & 0xf;
		curpixel_cvg = ((cvgcoeff * curpixel_cvg) >> 3) & 0xf;
	}

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode1_noir_noblsh_nozup_nofb_noae_nococ_nocvu(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	int overflow = curpixel_cvg > 0;
	blend_en = 0;

	int cvgcoeff = 0;
	UINT32 dzenc = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (max || (overflow ? infront : nearer)); 
}

UINT32 z_compare_zcomp_zmode2_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode2_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	sz &= 0x3ffff;

	UINT32 oz;

	oz = z_decompress(zcurpixel);

	UINT32 infront = (sz < oz) ? 1 : 0;
	
	blend_en = 0;

	UINT32 max = (oz == 0x3ffff);

	return (infront || max); 
}

UINT32 z_compare_zcomp_zmode3_ir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_ir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 0;;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_blsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;
	INT32 rawdzmem;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);
	rawdzmem = ((zval & 3) << 2) | (HREADADDR8(dzcurpixel) & 3);

	blshifta = CLIP(dzpixenc - rawdzmem, 0, 4);
	blshiftb = CLIP(rawdzmem - dzpixenc, 0, 4);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

UINT32 z_compare_zcomp_zmode3_noir_noblsh_nozup_nofb_noae_nococ(UINT32 zcurpixel, UINT32 dzcurpixel, UINT32 sz, UINT16 dzpix, int dzpixenc)
{
	int force_coplanar = 0;
	sz &= 0x3ffff;

	UINT32 oz, dzmem, zval;

	oz = z_decompress(zcurpixel);
	dzmem = dz_decompress(zcurpixel, dzcurpixel);
	zval = RREADIDX16(zcurpixel);

	int precision_factor = (zval >> 13) & 0xf;

	UINT32 dzmemmodifier; 
	if (precision_factor < 3)
	{
		dzmemmodifier = 16 >> precision_factor;
		if (dzmem == 0x8000)
			force_coplanar = 1;
		dzmem <<= 1;
		if (dzmem <= dzmemmodifier)
			dzmem = dzmemmodifier;
		if (!dzmem)
			dzmem = 0xffff;
	}
	if (dzmem > 0x8000)
		dzmem = 0xffff;
		

	UINT32 dznew = (dzmem > dzpix) ? dzmem : (UINT32)dzpix;
	dznew <<= 3;

	UINT32 farther = (force_coplanar || (sz + dznew) >= oz) ? 1 : 0;
	
	blend_en = 0;

	INT32 diff = (INT32)sz - (INT32)dznew;
	UINT32 nearer = (force_coplanar || diff <= (INT32)oz) ? 1: 0;
	UINT32 max = (oz == 0x3ffff);

	return (farther && nearer && !max); 
}

STRICTINLINE UINT32 dz_decompress(UINT32 zcurpixel, UINT32 dzcurpixel)
{
	UINT16 zval = RREADIDX16(zcurpixel);
	UINT8 dzval = HREADADDR8(dzcurpixel);
	UINT32 dz_compressed = ((zval & 3) << 2) | (dzval & 3);
	return (1 << dz_compressed);
}