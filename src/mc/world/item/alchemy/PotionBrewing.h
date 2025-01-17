#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Item;
class ItemDescriptor;
class ItemInstance;
// clang-format on

class PotionBrewing {
public:
    // PotionBrewing inner types declare
    // clang-format off
    class Ingredient;
    template<typename T0> class Mix;
    // clang-format on

    // PotionBrewing inner types define
    class Ingredient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnka70936;
        ::ll::UntypedStorage<4, 4> mUnk808e4c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Ingredient& operator=(Ingredient const&);
        Ingredient(Ingredient const&);
        Ingredient();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Ingredient(::ItemInstance const& item);

        MCAPI int getData() const;

        MCAPI int getItemId() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ItemInstance const& item);
        // NOLINTEND
    };

    template <typename T0>
    class Mix {
    public:
        // prevent constructor by default
        Mix& operator=(Mix const&);
        Mix(Mix const&);
        Mix();
    };

public:
    // prevent constructor by default
    PotionBrewing& operator=(PotionBrewing const&);
    PotionBrewing(PotionBrewing const&);
    PotionBrewing();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    addContainerRecipe(::Item const& from, ::PotionBrewing::Ingredient const& ingredient, ::Item const& to);

    MCAPI static void addPotionMix(
        ::ItemDescriptor const&            from,
        ::PotionBrewing::Ingredient const& ingredient,
        ::ItemDescriptor const&            to
    );

    MCAPI static int getFuelValue(::ItemDescriptor const& item);

    MCAPI static bool hasMix(::ItemInstance const& source, ::ItemDescriptor const& ingredient);

    MCAPI static void initPotionBrewing();

    MCAPI static bool isFuel(::ItemDescriptor const& item);

    MCAPI static bool isIngredient(::ItemDescriptor const& item);

    MCAPI static bool isPotionRecipeInput(::ItemDescriptor const& item);

    MCAPI static ::ItemInstance mix(::ItemDescriptor const& ingredient, ::ItemInstance const& source);

    MCAPI static void shutdown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::PotionBrewing::Mix<::ItemInstance>>& mChemistryMixes();

    MCAPI static ::std::vector<::PotionBrewing::Mix<::Item const&>>& mContainerMixes();

    MCAPI static bool& mIsInitialized();

    MCAPI static ::std::vector<::PotionBrewing::Mix<::ItemDescriptor>>& mPotionMixes();

    MCAPI static ::std::vector<::PotionBrewing::Ingredient>& mValidContainers();

    MCAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidIngredients();

    MCAPI static ::std::unordered_set<::PotionBrewing::Ingredient>& mValidRecipeInputs();
    // NOLINTEND
};
