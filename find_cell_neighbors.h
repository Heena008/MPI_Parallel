

#include <deal.II/distributed/tria.h>

#include <deal.II/grid/grid_tools.h>

#include <iostream>
#include <vector>

using namespace dealii;

#ifndef find_cell_neighbors_h
#  define find_cell_neighbors_h



template <int dim>
class FindCellNeighbors
{
public:
  FindCellNeighbors<dim>();

  /**
   * Find the neighbor list of all the active cells in the triangulation
   *
   * @param triangulation Triangulation to access the information of the cells
   * @param cells_local_neighbor_list A vector (with size of the local cell
   * number) of vectors (local adjacent cells of each local cell). First element
   * of each set shows the main cell itself
   * @param cells_ghost_neighbor_list A vector (with size of the local cell
   * number) of vectors (ghost adjacent cells of each local cell). First element
   * of each set shows the main cell itself
   */

  void
  find_cell_neighbors(
    const parallel::distributed::Triangulation<dim> &triangulation,
    std::vector<std::vector<typename Triangulation<dim>::active_cell_iterator>>
      &cells_local_neighbor_list,
    std::vector<std::vector<typename Triangulation<dim>::active_cell_iterator>>
      &cells_ghost_neighbor_list);
};

#endif /* find_cell_neighbors_h */
