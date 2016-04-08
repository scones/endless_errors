/*
 * error.h
 *
 *  Created on: 03.10.2013
 *      Author: scn
 */

#ifndef ERROR_H_
#define ERROR_H_

#include <exception>
#include <string>


namespace core {

  namespace error {

    class error : public std::exception {

      public:


      error(std::string const& what = std::string());
//      virtual ~error() {};

      void log_error(std::string const& what);
      virtual char const* what() const noexcept;


      protected:


      std::string m_what;

    };

  }

}

#endif /* ERROR_H_ */

