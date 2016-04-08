/*
 * error_test.cpp
 *
 *  Created on: 8 Apr 2016
 *      Author: scones
 */


#define BOOST_TEST_DYN_LINK
#ifdef STAND_ALONE
#   define BOOST_TEST_MODULE Main
#endif
#include <boost/test/unit_test.hpp>


#include "core/error/error.h"


BOOST_AUTO_TEST_SUITE(error_test)


BOOST_AUTO_TEST_CASE(error_throw) {
  try {
    throw core::error::error("some_error");
  } catch (core::error::error const& e) {
    BOOST_CHECK_MESSAGE(0 == std::strcmp("error - some_error", e.what()), "wrong error message");
  }
}


BOOST_AUTO_TEST_SUITE_END()

