/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeButton : UIButton {
    ICQLink * _link;
    ICQOffer * _offer;
}

@property (nonatomic, readonly) ICQLink *link;
@property (nonatomic, retain) ICQOffer *offer;

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 links:(id)arg3;
+ (id)buttonWithType:(int)arg1;
+ (BOOL)shouldShowForOffer:(id)arg1;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1;
+ (id)upgradeButton;

- (void).cxx_destruct;
- (id)buttonAttributes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)link;
- (id)offer;
- (void)setOffer:(id)arg1;

@end