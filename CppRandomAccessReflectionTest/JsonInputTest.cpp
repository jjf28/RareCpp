#include <gtest/gtest.h>
#include <regex>
#include "JsonInputTest.h"
using namespace Reflect;

TEST(JsonInputCustomizersTest, CustomizeFullySpecialized)
{
    CustomizeFullySpecialized customizeFullySpecialized = { 1, 2, 'a' };
    bool isSpecialized = Json::Input::Customize<CustomizeFullySpecialized, int, CustomizeFullySpecialized::Class::IndexOf::firstField, Annotate<>, CustomizeFullySpecialized::Class::firstField_::Field>
        ::As(std::cin, Json::context, customizeFullySpecialized, customizeFullySpecialized.firstField);
    EXPECT_TRUE(isSpecialized);

    isSpecialized = Json::Input::HaveSpecialization<CustomizeFullySpecialized, int, CustomizeFullySpecialized::Class::IndexOf::firstField, Annotate<>, CustomizeFullySpecialized::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize5Args_OpAnnotationsDefaulted)
{
    Customize5Args_OpAnnotationsDefaulted customize5Args_OpAnnotationsDefaulted;
    bool isSpecialized = Json::Input::Customize<Customize5Args_OpAnnotationsDefaulted, int, Customize5Args_OpAnnotationsDefaulted::Class::IndexOf::firstField, Annotate<>, Customize5Args_OpAnnotationsDefaulted::Class::firstField_::Field>
        ::As(std::cin, Json::context, customize5Args_OpAnnotationsDefaulted, customize5Args_OpAnnotationsDefaulted.firstField);
    EXPECT_TRUE(isSpecialized);
    
    isSpecialized = Json::Input::HaveSpecialization<Customize5Args_OpAnnotationsDefaulted, int, Customize5Args_OpAnnotationsDefaulted::Class::IndexOf::firstField, Annotate<>, Customize5Args_OpAnnotationsDefaulted::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize5Args_FieldIndexDefaulted)
{
    Customize5Args_FieldIndexDefaulted customize5Args_FieldIndexDefaulted;
    bool isSpecialized = Json::Input::Customize<Customize5Args_FieldIndexDefaulted, int, Json::NoFieldIndex, Annotate<>, Customize5Args_FieldIndexDefaulted::Class::firstField_::Field>
        ::As(std::cin, Json::context, customize5Args_FieldIndexDefaulted, customize5Args_FieldIndexDefaulted.firstField);
    EXPECT_TRUE(isSpecialized);
    
    isSpecialized = Json::Input::HaveSpecialization<Customize5Args_FieldIndexDefaulted, int, Customize5Args_FieldIndexDefaulted::Class::IndexOf::firstField, Annotate<>, Customize5Args_FieldIndexDefaulted::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize5Args_BothDefaulted)
{
    Customize5Args_BothDefaulted customize5Args_BothDefaulted;
    bool isSpecialized = Json::Input::Customize<Customize5Args_BothDefaulted, int, Json::NoFieldIndex, Annotate<>, Customize5Args_BothDefaulted::Class::firstField_::Field>
        ::As(std::cin, Json::context, customize5Args_BothDefaulted, customize5Args_BothDefaulted.firstField);
    EXPECT_TRUE(isSpecialized);
    
    isSpecialized = Json::Input::HaveSpecialization<Customize5Args_BothDefaulted, int, Customize5Args_BothDefaulted::Class::IndexOf::firstField, Annotate<>, Customize5Args_BothDefaulted::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize4Args)
{
    Customize4Args customize4Args;
    bool isSpecialized = Json::Input::Customize<Customize4Args, int, Customize4Args::Class::IndexOf::firstField, Annotate<>>
        ::As(std::cin, Json::context, customize4Args, customize4Args.firstField);
    EXPECT_TRUE(isSpecialized);
    
    isSpecialized = Json::Input::HaveSpecialization<Customize4Args, int, Customize4Args::Class::IndexOf::firstField, Annotate<>, Customize4Args::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize4Args_FieldIndexDefaulted)
{
    Customize4Args_FieldIndexDefaulted customize4Args_FieldIndexDefaulted;
    bool isSpecialized = Json::Input::Customize<Customize4Args_FieldIndexDefaulted, int, Json::NoFieldIndex, Annotate<>>
        ::As(std::cin, Json::context, customize4Args_FieldIndexDefaulted, customize4Args_FieldIndexDefaulted.firstField);
    EXPECT_TRUE(isSpecialized);
    
    isSpecialized = Json::Input::HaveSpecialization<Customize4Args_FieldIndexDefaulted, int, Customize4Args_FieldIndexDefaulted::Class::IndexOf::firstField, Annotate<>, Customize4Args_FieldIndexDefaulted::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize3Args)
{
    Customize3Args customize3Args;
    bool isSpecialized = Json::Input::Customize<Customize3Args, int, Customize3Args::Class::IndexOf::firstField>
        ::As(std::cin, Json::context, customize3Args, customize3Args.firstField);
    EXPECT_TRUE(isSpecialized);
    
    isSpecialized = Json::Input::HaveSpecialization<Customize3Args, int, Customize3Args::Class::IndexOf::firstField, Annotate<>, Customize3Args::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize2Args)
{
    Customize2Args customize2Args;
    bool isSpecialized = Json::Input::Customize<Customize2Args, int>
        ::As(std::cin, Json::context, customize2Args, customize2Args.firstField);
    EXPECT_TRUE(isSpecialized);
    
    isSpecialized = Json::Input::HaveSpecialization<Customize2Args, int, Customize2Args::Class::IndexOf::firstField, Annotate<>, Customize2Args::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, CustomizeTypeFullySpecialized)
{
    CustomizeTypeFullySpecialized customizeTypeFullySpecialized;
    bool isSpecialized = Json::Input::CustomizeType<CustomizeTypeFullySpecialized, Annotate<>, CustomizeTypeFullySpecialized::Class::firstField_::Field>
        ::As(std::cin, Json::context, customizeTypeFullySpecialized);
    EXPECT_TRUE(isSpecialized);

    isSpecialized = Json::Input::HaveSpecialization<CustomizeTypeFullySpecialized, CustomizeTypeFullySpecialized, CustomizeTypeFullySpecialized::Class::IndexOf::firstField, Annotate<>, CustomizeTypeFullySpecialized::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, Customize3Args_OpAnnotationsDefaulted)
{
    Customize3Args_OpAnnotationsDefaulted customize3Args_OpAnnotationsDefaulted;
    bool isSpecialized = Json::Input::CustomizeType<Customize3Args_OpAnnotationsDefaulted, Annotate<>, Customize3Args_OpAnnotationsDefaulted::Class::firstField_::Field>
        ::As(std::cin, Json::context, customize3Args_OpAnnotationsDefaulted);
    EXPECT_TRUE(isSpecialized);

    isSpecialized = Json::Input::HaveSpecialization<Customize3Args_OpAnnotationsDefaulted, Customize3Args_OpAnnotationsDefaulted, Customize3Args_OpAnnotationsDefaulted::Class::IndexOf::firstField, Annotate<>, Customize3Args_OpAnnotationsDefaulted::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, CustomizeType2Args)
{
    CustomizeType2Args customizeType2Args;
    bool isSpecialized = Json::Input::CustomizeType<CustomizeType2Args, Annotate<>>
        ::As(std::cin, Json::context, customizeType2Args);
    EXPECT_TRUE(isSpecialized);

    isSpecialized = Json::Input::HaveSpecialization<CustomizeType2Args, CustomizeType2Args, CustomizeType2Args::Class::IndexOf::firstField, Annotate<>, CustomizeType2Args::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

TEST(JsonInputCustomizersTest, CustomizeType1Arg)
{
    CustomizeType1Arg customizeType1Arg;
    bool isSpecialized = Json::Input::CustomizeType<CustomizeType1Arg>
        ::As(std::cin, Json::context, customizeType1Arg);
    EXPECT_TRUE(isSpecialized);

    isSpecialized = Json::Input::HaveSpecialization<CustomizeType1Arg, CustomizeType1Arg, CustomizeType1Arg::Class::IndexOf::firstField, Annotate<>, CustomizeType1Arg::Class::firstField_::Field>;
    EXPECT_TRUE(isSpecialized);
}

struct Cacheable
{
    int a;
    short b;

    REFLECT(() Cacheable, () a, () b)
};

TEST(JsonInputCacheTest, GetClassFieldCache)
{
    Cacheable cacheable;
    std::multimap<size_t, Json::JsonField> & fieldNameToJsonField =
        Json::Input::getClassFieldCache<Cacheable>(cacheable);

    bool foundField = false;
    auto aMatches = fieldNameToJsonField.equal_range(Json::Input::Cache::strHash("a"));
    for ( auto it = aMatches.first; it != aMatches.second; ++it )
    {
        if ( it->second.name.compare("a") == 0 )
        {
            foundField = true;
            EXPECT_EQ(0, it->second.index);
            EXPECT_EQ(Json::JsonField::Type::Regular, it->second.type);
        }
    }
    EXPECT_TRUE(foundField);

    foundField = false;
    auto bMatches = fieldNameToJsonField.equal_range(Json::Input::Cache::strHash("b"));
    for ( auto it = bMatches.first; it != bMatches.second; ++it )
    {
        if ( it->second.name.compare("b") == 0 )
        {
            foundField = true;
            EXPECT_EQ(1, it->second.index);
            EXPECT_EQ(Json::JsonField::Type::Regular, it->second.type);
        }
    }
    EXPECT_TRUE(foundField);
}

TEST(JsonInputCacheTest, GetJsonField)
{
    Cacheable cacheable;
    Json::JsonField* jsonField = Json::Input::getJsonField(cacheable, "b");
    EXPECT_FALSE(jsonField == nullptr);
    EXPECT_EQ(1, jsonField->index);
    EXPECT_STREQ("b", jsonField->name.c_str());
    EXPECT_EQ(Json::JsonField::Type::Regular, jsonField->type);
}

TEST(JsonInputCacheTest, PutClassFieldCache)
{
    EXPECT_NO_THROW(Json::putClassFieldCache(std::cout));
}

TEST(JsonInputCheckedTest, Peek)
{
    char c = '\0';
    std::stringstream empty("");
    bool visited = false;
    try {
        Json::Checked::peek(empty, c, "exception");
    } catch ( Json::UnexpectedInputEnd & ) {
        visited = true;
    }
    EXPECT_TRUE(visited);

    std::stringstream nonEmpty("a");
    Json::Checked::peek(nonEmpty, c, "a");
    EXPECT_EQ('a', c);
}

TEST(JsonInputCheckedTest, TryGet)
{
    std::stringstream empty("");
    bool visited = false;
    try {
        Json::Checked::tryGet(empty, 'a', "exception");
    } catch ( Json::UnexpectedInputEnd & ) {
        visited = true;
    }

    std::stringstream nonEmptyMatch("   \n\t  a");
    EXPECT_TRUE(Json::Checked::tryGet(nonEmptyMatch, 'a', "a"));

    std::stringstream nonEmptyNonMatch("   \n\t  b");
    EXPECT_FALSE(Json::Checked::tryGet(nonEmptyNonMatch, 'a', "a"));
}

TEST(JsonInputCheckedTest, TryGetPrimarySecondary)
{
    std::stringstream primaryMatch("a");
    EXPECT_TRUE(Json::Checked::tryGet<true>(primaryMatch, 'a', 'b', "a", "b"));

    std::stringstream secondaryMatch("b");
    EXPECT_TRUE(Json::Checked::tryGet<false>(secondaryMatch, 'a', 'b', "a", "b"));

    std::stringstream primaryNonMatch("b");
    EXPECT_FALSE(Json::Checked::tryGet<true>(primaryNonMatch, 'a', 'b', "a", "b"));

    std::stringstream secondaryNonMatch("a");
    EXPECT_FALSE(Json::Checked::tryGet<false>(secondaryNonMatch, 'a', 'b', "a", "b"));
}

TEST(JsonInputCheckedTest, GetTrueFalse)
{
    std::stringstream ssTrueMatch("t");
    EXPECT_TRUE(Json::Checked::getTrueFalse(ssTrueMatch, 't', 'f', "t"));
    std::stringstream ssFalseMatch("f");
    EXPECT_FALSE(Json::Checked::getTrueFalse(ssFalseMatch, 't', 'f', "t"));
    std::stringstream ssNoMatch("n");
    EXPECT_THROW(Json::Checked::getTrueFalse(ssNoMatch, 't', 'f', "t"), Json::Exception);
}

TEST(JsonInputCheckedTest, GetTrueFalseSecondaryFalseChar)
{
    std::stringstream primary("b");
    EXPECT_FALSE(Json::Checked::getTrueFalse<true>(primary, 'a', 'b', 'c', "b", "c"));

    std::stringstream secondary("c");
    EXPECT_FALSE(Json::Checked::getTrueFalse<false>(secondary, 'a', 'b', 'c', "b", "c"));
}

TEST(JsonInputCheckedTest, GetExpectedChar)
{
    char c = '\0';
    std::stringstream expected("a");
    EXPECT_NO_THROW(Json::Checked::get(expected, c, 'a', "a"));

    std::stringstream unexpected("b");
    EXPECT_THROW(Json::Checked::get(expected, c, 'c', "c"), Json::Exception);
}

TEST(JsonInputCheckedTest, GetChar)
{
    char c = '\0';

    std::stringstream whitespaceIgnoredEmpty("  \t\n  ");
    EXPECT_THROW(Json::Checked::get(whitespaceIgnoredEmpty, c, "exception"), Json::UnexpectedInputEnd);

    std::stringstream whitespaceIgnoredNonEmpty("  \t\n  a");
    Json::Checked::get(whitespaceIgnoredNonEmpty, c, "a");
    EXPECT_EQ('a', c);

    std::stringstream empty("");
    EXPECT_THROW(Json::Checked::get(empty, c, "exception"), Json::UnexpectedInputEnd);

    std::stringstream nonEmpty("b");
    Json::Checked::get(nonEmpty, c, "b");
    EXPECT_EQ('b', c);
}

TEST(JsonInputCheckedTest, GetSecondaryDescription)
{
    char c = '\0';
    std::stringstream primary;
    EXPECT_THROW(Json::Checked::get<true>(primary, c, "expected", "secondary expected"), Json::UnexpectedInputEnd);

    std::stringstream secondary;
    EXPECT_THROW(Json::Checked::get<false>(primary, c, "expected", "secondary expected"), Json::UnexpectedInputEnd);
}

TEST(JsonInputCheckedTest, GetSecondary)
{
    char c = '\0';
    std::stringstream primaryExpected("a");
    EXPECT_NO_THROW(Json::Checked::get<true>(primaryExpected, c, 'a', 'b', "a", "b"));

    std::stringstream secondaryExpected("d");
    EXPECT_NO_THROW(Json::Checked::get<false>(secondaryExpected, c, 'c', 'd', "c", "d"));

    std::stringstream primaryUnexpected("b");
    EXPECT_THROW(Json::Checked::get<true>(primaryExpected, c, 'a', 'b', "a", "b"), Json::Exception);
    
    std::stringstream secondaryUnexpected("c");
    EXPECT_THROW(Json::Checked::get<false>(secondaryExpected, c, 'c', 'd', "c", "d"), Json::Exception);
}

TEST(JsonInputCheckedTest, Unget)
{
    char c = '\0';
    std::stringstream unget("asdf");
    Json::Checked::get(unget, c, "a");
    EXPECT_EQ('a', c);
    EXPECT_TRUE(Json::Checked::unget(unget, 'a'));
    
    Json::Checked::get(unget, c, "a");
    EXPECT_EQ('a', c);
    Json::Checked::get(unget, c, "s");
    EXPECT_EQ('s', c);
}

TEST(JsonInputCheckedTest, EscapeSequenceGet)
{
    char c = '\0';
    std::stringstream goodSequence("0");
    Json::Checked::escapeSequenceGet(goodSequence, c, "u003");
    EXPECT_EQ('0', c);

    std::stringstream badSequence("");
    EXPECT_THROW(Json::Checked::escapeSequenceGet(badSequence, c, "u003"), Json::InvalidEscapeSequence);
}

TEST(JsonInputCheckedTest, ConsumeWhitespace)
{
    std::stringstream empty("");
    EXPECT_THROW(Json::Checked::consumeWhitespace(empty, "exception"), Json::UnexpectedInputEnd);

    std::stringstream onlyWhitespace("  \n\t  ");
    EXPECT_THROW(Json::Checked::consumeWhitespace(onlyWhitespace, "exception"), Json::UnexpectedInputEnd);

    std::stringstream prefixWhitespace("\t\ta");
    EXPECT_NO_THROW(Json::Checked::consumeWhitespace(prefixWhitespace, "noThrow"));
}

TEST(JsonInputCheckedTest, ConsumeWhitespacePrimarySecondary)
{
    std::stringstream primary("  a");
    EXPECT_NO_THROW(Json::Checked::consumeWhitespace<true>(primary, "primary", "secondary"));

    std::stringstream secondary("  b");
    EXPECT_NO_THROW(Json::Checked::consumeWhitespace<false>(secondary, "secondary", "secondary"));
}

TEST(JsonInputConsumeTest, Null)
{
    char c = '\0';
    std::stringstream validNull("\n null,");
    EXPECT_NO_THROW(Json::Consume::Null<true>(validNull, c));

    std::stringstream incompleteNull("nu");
    EXPECT_THROW(Json::Consume::Null<true>(incompleteNull, c), Json::UnexpectedInputEnd);
}

TEST(JsonInputConsumeTest, NullToStream)
{
    char c = '\0';
    std::stringstream source("null,");
    std::stringstream receiver;
    Json::Consume::Null<true>(source, c, receiver);
    EXPECT_STREQ("null", receiver.str().c_str());
}

TEST(JsonInputConsumeTest, TryNull)
{
    char c = '\0';
    std::stringstream nonNull("true,");
    std::stringstream partialNull("nula,");
    std::stringstream fullNull("null,");

    EXPECT_FALSE(Json::Consume::TryNull<true>(nonNull, c));
    EXPECT_THROW(Json::Consume::TryNull<true>(partialNull, c), Json::Exception);
    EXPECT_TRUE(Json::Consume::TryNull<true>(fullNull, c));
}

TEST(JsonInputConsume, True)
{
    char c = '\0';
    std::stringstream nonTrue("false,");
    std::stringstream partialTrue("tru,");
    std::stringstream fullTrue("true,");

    EXPECT_THROW(Json::Consume::True<true>(nonTrue, c), Json::Exception);
    EXPECT_THROW(Json::Consume::True<true>(partialTrue, c), Json::Exception);
    EXPECT_NO_THROW(Json::Consume::True<true>(fullTrue, c));
}

TEST(JsonInputConsume, TrueToStream)
{
    char c = '\0';
    std::stringstream fullTrue("true,");
    std::stringstream receiver;

    EXPECT_NO_THROW(Json::Consume::True<true>(fullTrue, c, receiver));

    EXPECT_STREQ("true", receiver.str().c_str());
}


TEST(JsonInputConsume, False)
{
    char c = '\0';
    std::stringstream nonFalse("true,");
    std::stringstream partialFalse("fals,");
    std::stringstream fullFalse("false,");

    EXPECT_THROW(Json::Consume::False<true>(nonFalse, c), Json::Exception);
    EXPECT_THROW(Json::Consume::False<true>(partialFalse, c), Json::Exception);
    EXPECT_NO_THROW(Json::Consume::False<true>(fullFalse, c));
}

TEST(JsonInputConsume, FalseToStream)
{
    char c = '\0';
    std::stringstream fullFalse("false,");
    std::stringstream receiver;

    EXPECT_NO_THROW(Json::Consume::False<true>(fullFalse, c, receiver));

    EXPECT_STREQ("false", receiver.str().c_str());
}

TEST(JsonInputConsume, Number)
{
    char c = '\0';

    std::stringstream nonNumber("asdf,");
    std::stringstream doubleDecimalNumber("123.456.789,");
    std::stringstream doubleNegativeNumber("--5,");
    std::stringstream negativeInteger("-1234,");
    std::stringstream validInteger("2345,");
    std::stringstream validFloat("123.456,");
    
    EXPECT_THROW(Json::Consume::Number<true>(nonNumber, c), Json::InvalidNumericCharacter);
    EXPECT_THROW(Json::Consume::Number<true>(doubleDecimalNumber, c), Json::InvalidSecondDecimal);
    EXPECT_THROW(Json::Consume::Number<true>(doubleNegativeNumber, c), Json::InvalidNumericCharacter);
    EXPECT_NO_THROW(Json::Consume::Number<true>(negativeInteger, c));
    EXPECT_NO_THROW(Json::Consume::Number<true>(validInteger, c));
    EXPECT_NO_THROW(Json::Consume::Number<true>(validFloat, c));
}


TEST(JsonInputConsume, NumberToStream)
{
    char c = '\0';

    std::stringstream nonNumber("asdf,");
    std::stringstream doubleDecimalNumber("123.456.789,");
    std::stringstream doubleNegativeNumber("--5,");
    std::stringstream negativeInteger("-1234,");
    std::stringstream validInteger("2345,");
    std::stringstream validFloat("123.456,");

    std::stringstream nonNumberReceiver, doubleDecimalNumberReceiver, doubleNegativeNumberReceiver,
        negativeIntegerReceiver, validIntegerReceiver, validFloatReceiver;
    
    EXPECT_THROW(Json::Consume::Number<true>(nonNumber, c, nonNumberReceiver), Json::InvalidNumericCharacter);
    EXPECT_THROW(Json::Consume::Number<true>(doubleDecimalNumber, c, doubleDecimalNumberReceiver), Json::InvalidSecondDecimal);
    EXPECT_THROW(Json::Consume::Number<true>(doubleNegativeNumber, c, doubleNegativeNumberReceiver), Json::InvalidNumericCharacter);
    EXPECT_NO_THROW(Json::Consume::Number<true>(negativeInteger, c, negativeIntegerReceiver));
    EXPECT_NO_THROW(Json::Consume::Number<true>(validInteger, c, validIntegerReceiver));
    EXPECT_NO_THROW(Json::Consume::Number<true>(validFloat, c, validFloatReceiver));
    
    EXPECT_STREQ("-1234", negativeIntegerReceiver.str().c_str());
    EXPECT_STREQ("2345", validIntegerReceiver.str().c_str());
    EXPECT_STREQ("123.456", validFloatReceiver.str().c_str());
}

TEST(JsonInputConsume, String)
{
    char c = '\0';
    std::stringstream input("\"asdf\\\"\\r\\n\\fqwer\"");
    EXPECT_NO_THROW(Json::Consume::String(input, c));
}

TEST(JsonInputConsume, StringToStream)
{
    char c = '\0';
    std::stringstream input("\"asdf\\\"\\r\\n\\fqwer\"");
    std::stringstream receiver;
    EXPECT_NO_THROW(Json::Consume::String(input, c, receiver));
    EXPECT_STREQ("\"asdf\\\"\\r\\n\\fqwer\"", receiver.str().c_str());
}

TEST(JsonInputConsume, Value)
{
    char c = '\0';
    std::stringstream stringStream("\"asdf\"");
    std::stringstream numberStream("1234,");
    std::stringstream objectStream("{\"one\":1,\"two\":2}");
    std::stringstream arrayStream("[1,2,3]");
    std::stringstream trueStream("true,");
    std::stringstream falseStream("false,");
    std::stringstream nullStream("null,");
    std::stringstream invalidStream("qqqq,");
    
    EXPECT_NO_THROW(Json::Consume::Value<true>(stringStream, c));
    EXPECT_NO_THROW(Json::Consume::Value<true>(numberStream, c));
    EXPECT_NO_THROW(Json::Consume::Value<true>(objectStream, c));
    EXPECT_NO_THROW(Json::Consume::Value<true>(arrayStream, c));
    EXPECT_NO_THROW(Json::Consume::Value<true>(trueStream, c));
    EXPECT_NO_THROW(Json::Consume::Value<true>(falseStream, c));
    EXPECT_NO_THROW(Json::Consume::Value<true>(nullStream, c));
    EXPECT_THROW(Json::Consume::Value<true>(invalidStream, c), Json::InvalidUnknownFieldValue);
}

TEST(JsonInputConsume, ValueToStream)
{
    char c = '\0';
    std::stringstream stringStream("\"asdf\"");
    std::stringstream numberStream("1234,");
    std::stringstream objectStream("{\"one\":1,\"two\":2}");
    std::stringstream arrayStream("[1,2,3]");
    std::stringstream trueStream("true,");
    std::stringstream falseStream("false,");
    std::stringstream nullStream("null,");
    std::stringstream invalidStream("qqqq,");
    
    std::stringstream stringReceiver;
    std::stringstream numberReceiver;
    std::stringstream objectReceiver;
    std::stringstream arrayReceiver;
    std::stringstream trueReceiver;
    std::stringstream falseReceiver;
    std::stringstream nullReceiver;
    std::stringstream invalidReceiver;
    
    EXPECT_NO_THROW(Json::Consume::Value<true>(stringStream, c, stringReceiver));
    EXPECT_NO_THROW(Json::Consume::Value<true>(numberStream, c, numberReceiver));
    EXPECT_NO_THROW(Json::Consume::Value<true>(objectStream, c, objectReceiver));
    EXPECT_NO_THROW(Json::Consume::Value<true>(arrayStream, c, arrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Value<true>(trueStream, c, trueReceiver));
    EXPECT_NO_THROW(Json::Consume::Value<true>(falseStream, c, falseReceiver));
    EXPECT_NO_THROW(Json::Consume::Value<true>(nullStream, c, nullReceiver));
    EXPECT_THROW(Json::Consume::Value<true>(invalidStream, c, invalidReceiver), Json::InvalidUnknownFieldValue);
    
    EXPECT_STREQ("\"asdf\"", stringReceiver.str().c_str());
    EXPECT_STREQ("1234", numberReceiver.str().c_str());
    EXPECT_STREQ("{\"one\":1,\"two\":2}", objectReceiver.str().c_str());
    EXPECT_STREQ("[1,2,3]", arrayReceiver.str().c_str());
    EXPECT_STREQ("true", trueReceiver.str().c_str());
    EXPECT_STREQ("false", falseReceiver.str().c_str());
    EXPECT_STREQ("null", nullReceiver.str().c_str());
}

TEST(JsonInputConsume, Iterable)
{
    char c = '\0';
    std::stringstream stringArray("[\"asdf\",\"qwer\"]");
    std::stringstream numberArray("[1,-2,-2.3,5.5,62312]");
    std::stringstream objectArray("[{\"one\":1,\"two\":2},{\"three\":3},{}]");
    std::stringstream arrayArray("[[1,2,3],[],[4,5,6]]");
    std::stringstream boolArray("[true,false,true,true,false]");
    std::stringstream nullArray("[null,null,null]");
    std::stringstream mixedArray("[null,1,\"two\",{},[]]");
    
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(stringArray, c));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(numberArray, c));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(objectArray, c));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(arrayArray, c));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(boolArray, c));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(nullArray, c));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(mixedArray, c));
}

TEST(JsonInputConsume, IterableToStream)
{
    char c = '\0';
    std::stringstream emptyArray("[]");
    std::stringstream stringArray("[\"asdf\",\"qwer\"]");
    std::stringstream numberArray("[1,-2,-2.3,5.5,62312]");
    std::stringstream objectArray("[{\"one\":1,\"two\":2},{\"three\":3},{}]");
    std::stringstream arrayArray("[[1,2,3],[],[4,5,6]]");
    std::stringstream boolArray("[true,false,true,true,false]");
    std::stringstream nullArray("[null,null,null]");
    std::stringstream mixedArray("[null,1,\"two\",{},[]]");
    std::stringstream emptyObj("{}");
    std::stringstream obj("{\"one\":\"str\",\"two\":2,\"three\":{},\"four\":[],\"five\":true,\"six\":null}");
    
    std::stringstream emptyArrayReceiver;
    std::stringstream stringArrayReceiver;
    std::stringstream numberArrayReceiver;
    std::stringstream objectArrayReceiver;
    std::stringstream arrayArrayReceiver;
    std::stringstream boolArrayReceiver;
    std::stringstream nullArrayReceiver;
    std::stringstream mixedArrayReceiver;
    std::stringstream emptyObjReceiver;
    std::stringstream objReceiver;
    
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(emptyArray, c, emptyArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(stringArray, c, stringArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(numberArray, c, numberArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(objectArray, c, objectArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(arrayArray, c, arrayArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(boolArray, c, boolArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(nullArray, c, nullArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<true>(mixedArray, c, mixedArrayReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<false>(emptyObj, c, emptyObjReceiver));
    EXPECT_NO_THROW(Json::Consume::Iterable<false>(obj, c, objReceiver));
    
    EXPECT_STREQ("[]", emptyArrayReceiver.str().c_str());
    EXPECT_STREQ("[\"asdf\",\"qwer\"]", stringArrayReceiver.str().c_str());
    EXPECT_STREQ("[1,-2,-2.3,5.5,62312]", numberArrayReceiver.str().c_str());
    EXPECT_STREQ("[{\"one\":1,\"two\":2},{\"three\":3},{}]", objectArrayReceiver.str().c_str());
    EXPECT_STREQ("[[1,2,3],[],[4,5,6]]", arrayArrayReceiver.str().c_str());
    EXPECT_STREQ("[true,false,true,true,false]", boolArrayReceiver.str().c_str());
    EXPECT_STREQ("[null,null,null]", nullArrayReceiver.str().c_str());
    EXPECT_STREQ("[null,1,\"two\",{},[]]", mixedArrayReceiver.str().c_str());
    EXPECT_STREQ("{}", emptyObjReceiver.str().c_str());
    EXPECT_STREQ("{\"one\":\"str\",\"two\":2,\"three\":{},\"four\":[],\"five\":true,\"six\":null}", objReceiver.str().c_str());
}

TEST(JsonInputRead, ObjectPrefix)
{
    char c = '\0';
    std::stringstream objPrefix("{");
    std::stringstream arrayPrefix("[");
    std::stringstream letter("a");
    
    EXPECT_NO_THROW(Json::Read::ObjectPrefix(objPrefix, c));
    EXPECT_THROW(Json::Read::ObjectPrefix(arrayPrefix, c), Json::Exception);
    EXPECT_THROW(Json::Read::ObjectPrefix(letter, c), Json::Exception);
}
