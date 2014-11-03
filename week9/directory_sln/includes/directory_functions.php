<?php

    /**
     * directory.php
     *
     * Computer Science 50
     * Week 9
     *
     * Eric Ouyang <eouyang@college.harvard.edu>
     * Frederick Widjaja <fwidjaja@college.harvard.edu>
     *
     * Functions to interact with the database
     */

    // configuration
    require("config.php");

    /**
     * Get all persons within the database
     *
     */
    function get_all_persons()
    {
        return query("SELECT * FROM people");
    }

    /**
     * Creates a person by saving the given data to the database
     *
     * Returns whether or not the person was successfully created
     */
    function create_person($name, $house, $age)
    {
        // validate input
        if (empty($name) || empty($house) || !is_numeric($age))
        {
            return false;
        }

        // insert person into the database
        $result = query(
            "INSERT INTO
                    people (name, house, age)
                    VALUES (?, ?, ?)",
            $name,
            $house,
            $age
        );

        // if insertion unsuccessful, return false
        if ($result === false)
        {
            return false;
        }
        // else return success
        return true;
    }

    /**
     * Gets a person from the database by ID
     *
     * Returns false on error, else the row from the database
     */
    function get_person($id)
    {
        // get the person by ID
        $result = query(
            "SELECT *
                FROM people
                WHERE id = ?",
            $id
        );

        // verify that we got what we're looking for, namely one row
        if (count($result) == 1)
        {
            // return the first row
            return $result[0];
        }

        return false;
    }

    /**
     * Edits a person with a given ID
     */
    function edit_person($id, $name, $house, $age)
    {
        // validate input
        if (!is_numeric($id) || empty($name) || empty($house) || !is_numeric($age))
        {
            return false;
        }

        // update the row
        $result = query(
            "UPDATE people SET
                name = ?,
                house = ?,
                age = ?
                WHERE id = ?",
            $name,
            $house,
            $age,
            $id
        );

        // if update unsuccessful, return false
        if ($result === false)
        {
            return false;
        }
        // else return success
        return true;
    }

    /**
     * Deletes a person from the database by ID
     */
    function delete_person($id)
    {
        // delete the person by ID
        $result = query(
            "DELETE FROM people
                WHERE id = ?",
            $id
        );

        // if delete unsuccessful, return false
        if ($result === false)
        {
            return false;
        }
        // else return success
        return true;
    }
?>
