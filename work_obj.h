//---------------------------------------------------------------------------
#pragma once
//---------------------------------------------------------------------------
#include <string>
#include <vector>
//---------------------------------------------------------------------------
#include "ip_addr.h"
//---------------------------------------------------------------------------


namespace ip_filter
{
  class t_work_obj
  {

  public:

    int mainFunc();

    // вынес в public функцию, чтобы было бы что тестировать в тестах
    static int back_ord_sort(std::vector<ip_filter::t_ip_addr>& avecPool);

  private:

  };
  //---------------------------------------------------------------------------

}