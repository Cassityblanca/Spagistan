//CfgVehicle groundholders for vests


class S_Vest_SPAGPAT;

class Item_V_Vest_SPAGPAT: S_Vest_SPAGPAT
{
    vehicleClass = ItemsVests;
    class TransportItems
    {
        class V_Vest_SPAGPAT
        {
            name = V_Vest_SPAGPAT;
            hiddenSelectionsTextures[] = { QPATHTOF(vests\m12_spagpat_ca.paa) };
            count = 1;
        };
    };
};
